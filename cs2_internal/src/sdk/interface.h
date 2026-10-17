#pragma once

#include <utils/mem.h>

namespace sdk
{
	using interface_fn = void *(__cdecl *)();

	struct interface_entry_t
	{
		interface_fn callback;
		const char *name;
		interface_entry_t *flink;
	};

	inline interface_entry_t *get_register_list(const wchar_t *module_name)
	{
		const auto module = utils::get_module_base_handle(module_name);
		if (!module)
			return nullptr;

		const auto create_interface = reinterpret_cast<ptrdiff_t>(utils::get_export_address(module, "CreateInterface"));
		if (!create_interface)
			return nullptr;

		return *reinterpret_cast<interface_entry_t **>(utils::follow_rel32(create_interface, 3));
	}

	template <typename T>
	inline T *Capture(interface_entry_t *register_list, const char *name)
	{
		if (!register_list || !name)
			return nullptr;

		for (auto it = register_list; it; it = it->flink)
		{
			if (it->name && ::utils::fnv1a(it->name) == ::utils::fnv1a(name))
				return reinterpret_cast<T *>(it->callback());
		}

		return nullptr;
	}

	inline uintptr_t get_interface(const wchar_t *module_name, uint32_t iface)
	{
		for (auto it = get_register_list(module_name); it; it = it->flink)
			if (it->name && FNV1A_CMP_IM(it->name, iface))
				return reinterpret_cast<uintptr_t>(it->callback());

		return 0;
	}
}

#define SOURCE2_CLIENT "Source2Client002"
#define GAME_RESOURCE_SERVICE_CLIENT "GameResourceServiceClientV001"
#define SOURCE2_ENGINE_TO_CLIENT "Source2EngineToClient001"
#define ENGINE_CVAR "VEngineCvar007"
#define INPUT_SYSTEM_VERSION "InputSystemVersion001"
