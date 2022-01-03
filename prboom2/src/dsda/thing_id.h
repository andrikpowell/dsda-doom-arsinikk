//
// Copyright(C) 2022 by Ryan Krafnick
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//	DSDA Thing ID
//

#ifndef __DSDA_THING_ID__
#define __DSDA_THING_ID__

#include "p_mobj.h"

typedef struct thing_id_list_entry_s {
  mobj_t* mo;
  struct thing_id_list_entry_s* next;
} thing_id_list_entry_t;

typedef struct thing_id_list_s {
  short thing_id;
  struct thing_id_list_entry_s* first;
  struct thing_id_list_entry_s* last;
  struct thing_id_list_s* next;
} thing_id_list_t;

void dsda_AddMobjThingID(mobj_t* mo, short thing_id);
void dsda_RemoveMobjThingID(mobj_t* mo);
mobj_t* dsda_FindMobjFromThingID(short thing_id, thing_id_list_entry_t** start);

#endif