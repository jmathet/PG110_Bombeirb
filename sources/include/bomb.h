#ifndef BOMB_H_
#define BOMB_H_

#include <map.h>
#include <game.h>

struct bomb;

struct bomb* bombs_init();

struct bomb* bomb_create(struct game* game, int x, int y, int range);

struct bomb* bombs_add_bomb(struct bomb *bomb, struct game* game, int x, int y, int range);

void bomb_update(struct bomb *bombs, struct game* game);

void bomb_display(struct bomb* bombs, struct game* game);

void bomb_explosion_box_type(struct game* game, int x, int y);

void bomb_explosion(struct bomb* bomb, struct game* game);

void bomb_destruction(struct bomb* bombs, struct game* game);

int bomb_get_state(struct bomb* bomb);


int bombs_get_size(struct bomb *bombs);

#endif /* BOMB */
