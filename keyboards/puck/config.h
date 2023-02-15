#pragma once


/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { D2, D3, C6, C7 }
#define MATRIX_COL_PINS { B4, D7, D6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

#define BACKLIGHT_LEVELS 3

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
