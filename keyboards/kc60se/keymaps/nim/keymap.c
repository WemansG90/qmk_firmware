/*
Copyright 2017 Blake C, Lewis

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "kc60se.h"
#include "action_layer.h"

#define _DEFAULT 0
#define _FN1 1
#define _FN2 2
#define _FN3 3

#define xxxxxx KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* layer 0 - default
 *,--------------------------------------------------------------------------.
 *| Esc|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |  \ |  ` |
 *|--------------------------------------------------------------------------|
 *| Tab   |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] | Bksp |
 *|--------------------------------------------------------------------------|
 *| Ctrl   |  A |  S |  D |  F |  G |  H |  J |  K |  L |  ; |  ' |  Enter   |
 *|--------------------------------------------------------------------------|
 *| Shift    |  Z |  X |  C |  V |  B |  N |  M |  , |  . |  / |    RShift   |
 *|--------------------------------------------------------------------------|
 *|  Fn2  |LAlt| Fn1  |            Space            |RAlt| RGui |App  | Fn3  |
 *`--------------------------------------------------------------------------'
*/
/* Layer 1
 *,--------------------------------------------------------------------------.
 *|grave| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12|   | Ins|
 *|--------------------------------------------------------------------------|
 *| CAPS |BlOn|BlUp|    |    |    | Pgup | Home |PgDn|prtsc|sclk|pause| Del  |
 *|--------------------------------------------------------------------------|
 *|       |Vol-|Vol+|Mute|    |    |left |up |down|right|   |    |           |
 *|--------------------------------------------------------------------------|
 *|         |Prev|Play|Next|    |    |End  |  /  |  *  | - | + |             |
 *|--------------------------------------------------------------------------|
 *|       |    |      |                            |    | Stop |    |        |
 *`--------------------------------------------------------------------------'
*/
/* Layer 2
 *,--------------------------------------------------------------------------.
 *|    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |
 *|--------------------------------------------------------------------------|
 *|      | P7 | P8 | P9 |    |    |    |      |    |    |    |    |     |
 *|--------------------------------------------------------------------------|
 *|       | P4 | P5 | P6 |    |    |    |    |    |    |    |    |           |
 *|--------------------------------------------------------------------------|
 *|         | P1 | P2 | P3 | P0 |    |    |    |     |    |    |             |
 *|--------------------------------------------------------------------------|
 *|       |    |      |                            |    |      |    |        |
 *`--------------------------------------------------------------------------'
*/
  [_DEFAULT] = LAYOUT_60_ansi( /* HHKB QWERTY w/full bottom row */
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_ENT, \
      KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
      MO(_FN2),KC_LALT, MO(_FN1),                 KC_SPC,                   KC_RALT, KC_LGUI, KC_APP,  MO(_FN3) \
      ),
  [_FN1] = LAYOUT_60_ansi( /* Layer 1 */
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, \
      KC_CAPS, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, KC_DEL, \
      xxxxxx,  KC_VOLD, KC_VOLU, KC_MUTE, xxxxxx, xxxxxx, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LEFT,          xxxxxx,  xxxxxx, \
      xxxxxx,           KC_MPRV, KC_MPLY, KC_MNXT,BL_ON,  BL_STEP, KC_END,  KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,                   xxxxxx,                   xxxxxx,  KC_MSTP, xxxxxx,  xxxxxx \
      ),
  [_FN2] = LAYOUT_60_ansi( /* Layer 2 */
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, \
      xxxxxx,  KC_P7,   KC_P8,   KC_P9,   xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, \
      xxxxxx,  KC_P4,   KC_P5,   KC_P6,   xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, \
      xxxxxx,           KC_P1,   KC_P2,   KC_P3,  KC_P0,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,                   xxxxxx,                   xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx \
      ),
  [_FN3] = LAYOUT_60_ansi( /* Layer 3 */
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, \
      xxxxxx,           xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, xxxxxx, xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx, \
      xxxxxx,  xxxxxx,  xxxxxx,                   xxxxxx,                   xxxxxx,  xxxxxx,  xxxxxx,  xxxxxx \
      )
};
