#include <game/game.h>
#include <sdk/client.h>

namespace sdk::schema
{
	template <typename T>
	T *chandle<T>::get()
	{
		return !valid() ? nullptr : resource_service->get_game_entity_system()->get_entity_by_index<T>(get_entry_index());
	}

	template <typename T>
	template <typename C>
	C *chandle<T>::get_as()
	{
		return !valid() ? nullptr : resource_service->get_game_entity_system()->get_entity_by_index<C>(get_entry_index());
	}

	template class chandle<base_player_pawn>;
	template class chandle<csplayer_pawn>;
	template class chandle<base_player_weapon>;
	template class chandle<base_entity>;
}
