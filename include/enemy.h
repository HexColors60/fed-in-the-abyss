#pragma once

#include "fita.h"

typedef struct enemy_s enemy_t;
typedef struct charac_s charac_t;

struct charac_s {
    int level;
    int hp;
    int mp;
    int str;
    int def;
};

struct enemy_s {
    char name;
    cursor_t *pos;
    cursor_t *pos_bak;
    charac_t *charac;
};

void enemy_turn(enemy_t *enemy);
void assign_enemy(char **map, char **old_state, enemy_t *enemy);
void add_enemy(enemy_t **enemies);
