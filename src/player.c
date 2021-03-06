#include "fita.h"

charac_t base_charac = {
	.level = 1,
	.hp = 10,
	.hp_max = 10,
	.mp = 10,
	.str = 5,
	.def = 5,
	.xp = 0
};

void assign_player(char **map, char **old_state, cursor_t *charac, cursor_t *cam)
{
	map[cam->y][cam->x] = old_state[cam->y][cam->x];
	map[charac->y][charac->x] = '@';
}

void create_player(player_t *player)
{
	*player = (player_t) {
		.charac = base_charac,
		.name = '@',
		.pos = {
			.x = (GET_WIDTH / 2) + 1,
			.y = (GET_HEIGHT / 2) + 1
		},
		.pos_bak = {
			.x = (GET_WIDTH / 2) + 1,
			.y = (GET_HEIGHT / 2) + 1
		}
	};
}
