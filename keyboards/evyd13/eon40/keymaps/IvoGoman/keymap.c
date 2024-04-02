/* Copyright 2019 Evy Dekkers
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
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _MA 0 //Main layer
#define _LO 1 //Low
#define _HI 2 //High
#define _TH 3 //Third

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_MA] = LAYOUT_planck_mit(
  KC_TAB,   KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
  KC_ESC,   KC_A,        KC_S,        KC_D,        KC_F,        KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
  KC_LSFT,  KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
  _______,  KC_LCTL,     KC_LOPT,     KC_LGUI,     MO(_LO),     KC_SPC,             MO(_HI),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT),

[_LO] = LAYOUT_planck_mit(
  _______,  KC_1,        KC_2,        KC_3,        KC_4,        KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,      KC_DEL,
  _______,  _______,     KC_LEFT,     KC_RIGHT,    KC_UP,       KC_LBRC,  KC_RBRC,  _______,  _______,  _______,  _______,  _______,
  _______,  _______,     _______,     _______,     KC_DOWN,     KC_LCBR,  KC_RCBR,  _______,  _______,  _______,  _______,  _______,
  _______,  _______,     _______,     _______,     _______,     KC_ENT,             MO(_TH),  _______,  _______,  _______,  _______),

[_HI] = LAYOUT_planck_mit(
  _______,  KC_EXLM,       KC_AT,     KC_HASH,      KC_DLR,     KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,   KC_DEL,
  _______,  _______,     KC_LEFT,     KC_RIGHT,      KC_UP,      KC_EQL,  KC_MINS,  KC_BSLS,  _______,  _______,  _______,   KC_GRV,
  _______,  _______,     _______,     _______,     KC_DOWN,     KC_PLUS,  KC_UNDS,  KC_PIPE,  KC_VOLD,  KC_VOLU,  KC_MPLY,  KC_TILD,
  _______,  _______,     _______,     _______,     MO(_TH),     _______,            _______,  _______,  _______,  _______,  _______),

[_TH] = LAYOUT_planck_mit(
  KC_F1,    KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
  _______,  _______,     _______,     _______,     _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,
  _______,  LCTL(KC_Z),  LCTL(KC_X),  LCTL(KC_C),  LCTL(KC_V),  _______,  _______,  KC_QUOT,  KC_LBRC,  KC_RBRC,  KC_BSLS,  _______,
  EE_CLR,   _______,     _______,     _______,     _______,     _______,            _______,  _______,  _______,  _______,  QK_BOOT),
};