/*
Copyright 2021 Christian Sandven

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

/*
 * Keyboard Matrix Assignments
 *
 */
#define MATRIX_ROW_PINS { F5, F7, B2, B6, F4, F6, B1, B3 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D2, B7 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { D3 }
#define ENCODERS_PAD_B { D4 }
#define ENCODER_RESOLUTION 4

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
