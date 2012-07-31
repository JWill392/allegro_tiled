/*
 * This addon adds Tiled map support to the Allegro game library.
 * Copyright (c) 2012 Damien Radtke - www.damienradtke.org
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * For more information, visit http://www.gnu.org/copyleft
 */

#ifndef _DRAW_H
#define _DRAW_H

#include <allegro5/allegro.h>
#include <allegro5/allegro_tiled.h>
#include <stdio.h>
#include "map.h"

void al_draw_map(TILED_MAP *map, float x, float y, int screen_width, int screen_height);
void al_draw_objects(TILED_MAP *map);
void al_update_backbuffer(TILED_MAP *map);

#endif