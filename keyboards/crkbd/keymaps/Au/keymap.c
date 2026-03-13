#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                     KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,
        KC_NO,          LCTL_T(KC_A),   LALT_T(KC_S),   LGUI_T(KC_D),   LSFT_T(KC_F),   KC_G,                     KC_H,           RSFT_T(KC_J),   RGUI_T(KC_K),   RALT_T(KC_L),   RCTL_T(KC_SCLN),KC_NO,
        KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                     KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_NO,

        LT(4,KC_ESC),   LT(1,KC_BSPC),  LT(5,KC_VOLD),  LT(5,KC_VOLU),  LT(2,KC_SPC),   LT(3,KC_TAB)
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                    LCTL(LSFT(KC_TAB)), LALT(KC_GRV),   RCS(KC_J),      LCTL(KC_TAB),   LCTL(KC_LBRC),  KC_DEL,
        KC_NO,          KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,                    KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        LCTL(KC_RBRC),  KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                    KC_P7,          KC_P3,          KC_P9,          KC_P1,          KC_CAPS,        KC_NO,

        KC_NO,          KC_NO,          KC_BRID,                                                                  KC_BRIU,        KC_ENT,         KC_MINS
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_NO,          KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_DQUO,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,                  KC_NO,          KC_RSFT,        KC_RGUI,        KC_RALT,        KC_RCTL,        KC_NO,
        KC_NO,          KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

        KC_LPRN,        KC_RPRN,        KC_UNDS,                                                                  KC_NO,          KC_NO,          KC_NO
    ),
    [3] = LAYOUT_split_3x6_3(
        KC_NO,          KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_QUOT,        KC_4,           KC_5,           KC_6,           KC_EQL,                   KC_NO,          KC_RSFT,        KC_RGUI,        KC_RALT,        KC_RCTL,        KC_NO,
        KC_NO,          KC_GRV,         KC_1,           KC_2,           KC_3,           KC_BSLS,                  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

        KC_DOT,         KC_0,           KC_MINS,                                                                  KC_NO,          KC_NO,          KC_NO
    ),
    [4] = LAYOUT_split_3x6_3(
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_LCTL,        KC_LALT,        KC_LGUI,        KC_LSFT,        KC_NO,                    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_MS_ACCEL0,   KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                    KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_MS_ACCEL1,   KC_NO,

        KC_NO,          KC_NO,          KC_NO,                                                                    KC_MS_BTN3,     KC_MS_BTN1,     KC_MS_BTN2
    ),
    [5] = LAYOUT_split_3x6_3(
        KC_NO,          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,                   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_F11,                   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F12,                   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

        KC_NO,          KC_NO,          KC_PSCR,                                                                  KC_NO,          KC_NO,          KC_NO
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    // Empty encoder map
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
