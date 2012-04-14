/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */
#ifndef __DNA_KEY_TYPES_H__
#define __DNA_KEY_TYPES_H__

/** \file DNA_key_types.h
 *  \ingroup DNA
 */

#include "DNA_defs.h"
#include "DNA_listBase.h"
#include "DNA_ID.h"

struct AnimData;
struct Ipo;

typedef struct KeyBlock {
	struct KeyBlock *next, *prev;
	
	float pos;
	float curval;
	short type, pad1, relative, flag;	/* relative == 0 means first key is reference */
	int totelem, uid;
	
	void *data;
	float *weights;
	char  name[64];	/* MAX_NAME */
	char vgroup[64];	/* MAX_VGROUP_NAME */

	float slidermin;
	float slidermax;
} KeyBlock;


typedef struct Key {
	ID id;
	struct AnimData *adt;	/* animation data (must be immediately after id for utilities to use it) */ 
	
	KeyBlock *refkey;
	/* this is not a regular string, although it is \0 terminated
	 * this is an array of (element_array_size, element_type) pairs
	 * (each one char) used for calculating shape key-blocks */
	char elemstr[32];
	int elemsize;
	float curval  DNA_DEPRECATED;
	
	ListBase block;
	struct Ipo *ipo  DNA_DEPRECATED;  /* old animation system, deprecated for 2.5 */
	
	ID *from;

	short type, totkey;
	short slurph, flag;
	float ctime;

	/*can never be 0, this is used for detecting old data*/
	int uidgen; /*current free uid for keyblocks*/
} Key;

/* **************** KEY ********************* */

/* key->type */
enum {
	KEY_NORMAL      = 0,
	KEY_RELATIVE    = 1
};

/* key->flag */
enum {
	KEY_DS_EXPAND   = 1
};

/* keyblock->type */
enum {
	KEY_LINEAR      = 0,
	KEY_CARDINAL    = 1,
	KEY_BSPLINE     = 2
};

/* keyblock->flag */
enum {
	KEYBLOCK_MUTE       = (1 << 0),
	KEYBLOCK_SEL        = (1 << 1),
	KEYBLOCK_LOCKED     = (1 << 2)
};

#endif /* __DNA_KEY_TYPES_H__  */
