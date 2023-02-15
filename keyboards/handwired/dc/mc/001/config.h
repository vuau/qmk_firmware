/*
Copyright 2021 Daniel Cormier

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

/*
    RE_CHANNEL_A          = _BV(6),
    RE_CHANNEL_B          = _BV(5),
*/
#define ENCODERS_PAD_A \
    { B6 }
#define ENCODERS_PAD_B \
    { B5 }
#define ENCODER_RESOLUTION 4

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

/* Bootmagic Lite key configuration */
// The (default) Stop key
// Doesn't work, though. Maybe becuase of the bootloader that's in use?
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1

#define USB_MAX_POWER_CONSUMPTION 100
