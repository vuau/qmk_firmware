/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 11

#define MATRIX_COL_PINS { GP24, GP23, GP21, GP20, GP19, GP6, GP5, GP4, GP3, GP2, GP1 }
#define MATRIX_ROW_PINS { GP25, GP18, GP17 }
// #define DEBUG_MATRIX_SCAN_RATE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

// #ifdef RGB_DI_PIN
// #define RGBLED_NUM 0
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8
// #endif

// #endif

#define FORCE_NKRO
