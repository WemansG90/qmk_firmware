#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
            BASE LAYER
    /-----------------------------------------------------`
    |             |    7    |    8    |    9    |    =    |
    |             |---------|---------|---------|---------|
    |             |    4    |    5    |    6    |    +    |
    |             |---------|---------|---------|---------|
    |             |    1    |    2    |    3    |    -    |
    |-------------|---------|---------|---------|---------|
    | play pause  |  TT(1)  |    0    |    .    |  Enter  |
    \-----------------------------------------------------'
    */
    [0] = LAYOUT(
                    KC_7,      KC_8,    KC_9,             KC_PEQL,
                    KC_4,      KC_5,    KC_6,             KC_KP_PLUS,
                    KC_1,      KC_2,    KC_3,             KC_KP_MINUS,
        KC_MPLY,    TT(1),     KC_0,    KC_DOT,           KC_PENT
    ),
    /*
            SUB LAYER
    /-----------------------------------------------------`
    |             |         |         |         |    *    |
    |             |---------|---------|---------|---------|
    |             |         |         |         |    /    |
    |             |---------|---------|---------|---------|
    |             |         |         |         |    €    |
    |-------------|---------|---------|---------|---------|
    |    Mute     |         |         |    ,    |         |
    \-----------------------------------------------------'
    */
    [1] = LAYOUT(
                    _______,     _______,     _______,      KC_PAST,
                    _______,     _______,     _______,      KC_PSLS,
                    _______,     _______,     _______,      ALGR(KC_5),
        KC_MUTE,    _______,     _______,     KC_PCMM,      KC_EQL
    ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                // main layer - Prev/next track
                if (clockwise) {
                    tap_code(KC_MNXT);
                } else {
                    tap_code(KC_MPRV);
                }
                break;

            default:
                // other layers FFW/REW
                if (clockwise) {
                    tap_code(KC_MFFD);
                } else {
                    tap_code(KC_MRWD);
                }
                break;
        }
    }
};
