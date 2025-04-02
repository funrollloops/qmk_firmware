/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BACKSLASH,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS,CMD_T(KC_A),ALT_T(KC_S),CTL_T(KC_D),SFT_T(KC_F),KC_G,           KC_H,SFT_T(KC_J),CTL_T(KC_K),ALT_T(KC_L),CMD_T(KC_SCLN), KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   TO(1),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                  KC_ESC,SFT_T(KC_SPC),LT(4,KC_TAB),    KC_BSPC,LT(2,KC_ENT),LT(3,KC_DEL)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_A,    KC_S,    KC_D,    KC_F, _______,                      _______,    KC_J,    KC_K,    KC_L, KC_SCLN, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,   TO(0),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,  KC_SPC,  KC_TAB,    _______,  KC_ENT, KC_DEL
                                      //`--------------------------'  `--------------------------'

  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______,  KC_GRV, KC_QUOT, KC_MINS,  KC_EQL, KC_BSLS,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LCMD, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_DOT, KC_LBRC, KC_RBRC,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

#define RGB(cmd) QK_RGB_MATRIX_##cmd
    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_SYRQ,  KC_F11,  KC_F11, KC_PSCR, KC_VOLU, KC_VOLD,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       QK_RBT,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                        KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LCMD,  QK_RBT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                    RGB(TOGGLE),RGB(VALUE_DOWN),RGB(VALUE_UP),RGB(MODE_PREVIOUS),RGB(MODE_NEXT), QK_BOOT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO
                                      //`--------------------------'  `--------------------------'
  ),
#undef RGB

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, C(KC_Q), C(KC_W), C(KC_E), C(KC_R), C(KC_T),                         KC_0, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC,  KC_DLR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LCMD, KC_LALT, KC_LCTL, KC_LSFT, C(KC_G),                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_RGHT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_END, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
