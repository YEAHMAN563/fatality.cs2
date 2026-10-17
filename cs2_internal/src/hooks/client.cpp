#include <macros.h>
#include <game/cfg.h>
#include <game/draw_manager.h>
#include <game/hook_manager.h>
#include <gui/controls/selectable_script.h>
#include <menu/menu.h>
#include <menu/init/init_anim.h>
#include <sdk/client.h>
#include <sdk/cvar.h>
#include <sdk/engine.h>
#include <sdk/input.h>
#include <sdk/sdk.h>

namespace hooks::client
{
	void prediction_update(void* pred, int a, int b)
	{
		//hook_manager.prediction_update->call(pred, a, b);
	}

	sdk::ViewMatrix_t* get_matrix_view(CRenderGameSystem* pRenderGameSystem, IViewRender* pViewRender, sdk::ViewMatrix_t* pOutWorldToView, sdk::ViewMatrix_t* pOutViewToProjection, sdk::ViewMatrix_t* pOutWorldToProjection, sdk::ViewMatrix_t* pOutWorldToPixels)
	{
		const auto oMatrix = hkGetMatrixView.GetOriginal();

		// get view matrix
		sdk::ViewMatrix = *pOutWorldToProjection;
		// get camera position
		// @note: ida @GetMatrixForView(global_pointer, pRenderGameSystem + 16, ...)
		sdk::CameraPosition = pViewRender->vecOrigin;

		return oMatrix(pRenderGameSystem, pViewRender, pOutWorldToView, pOutViewToProjection, pOutWorldToProjection, pOutWorldToPixels);
	}

	void frame_stage_notify(void* rcx, sdk::client_frame_stage stage)
	{
		const auto oFrameStageNotify = hkFrameStageNotify.GetOriginal();

		if (stage == sdk::client_frame_stage::FRAME_NET_UPDATE_POSTDATAUPDATE_END)
		{
		}

		oFrameStageNotify(rcx, stage);
	}

	void override_view(void *rcx, sdk::cview_setup *view_setup)
	{

		const auto oOverrideView = hkOverrideView.GetOriginal();

		oOverrideView(rcx, view_setup);
	}

	float get_fov(void *rcx)
	{
		const auto oGetFov = hkGetFov.GetOriginal();
		if (cfg.misc.fov_enabled.get())
			return cfg.misc.fov.get();

		return oGetFov(rcx);
	}

	bool __fastcall create_move(sdk::ccsgo_input* input, int slot, sdk::cuser_cmd* pUserCmd)
	{
		return hkCreateMove.GetOriginal()(input, slot, pUserCmd);
	}

	void on_render_start(sdk::cview_render *view_render)
	{
		if (sdk::cvar)
		{
			static auto r_aspectratio = sdk::cvar->find(FNV1A("r_aspectratio"));
			if (r_aspectratio)
				r_aspectratio->value.fl = cfg.misc.aspect.get() / 100.f;
		}

		const auto oOnRenderStart = hkOnRenderStart.GetOriginal();

		oOnRenderStart(view_render);

		if (menu::init_anim.init_done && evo::ren::draw.adapter && draw_mgr.buf->vb->object && !draw_mgr.buf->is_deferred_ready)
		{
			const bool was_dirty = draw_mgr.buf->deferred_dirty;
			if (!was_dirty && !draw_mgr.dirty_ackn)
			{
				draw_mgr.buf->reset(true);
				draw_mgr.buf->lock();


				const auto ctx = static_cast<ID3D11DeviceContext *>(evo::ren::draw.adapter->get_deferred_context());
				ctx->ClearState();

				const auto cmd_list = reinterpret_cast<ID3D11CommandList **>(evo::ren::draw.adapter->get_deferred_list());
				if (*cmd_list)
					(*cmd_list)->Release();

				draw_mgr.buf->unlock();

				ctx->FinishCommandList(false, cmd_list);
				draw_mgr.buf->is_deferred_ready = true;

			}
			else
			{
				if (was_dirty)
					draw_mgr.dirty_ackn = true;
				draw_mgr.buf->is_deferred_ready = true;
			}
		}
	}

}
