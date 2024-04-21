/* Copyright 2020 LAZYDESIGNERS
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

#define LT2_SPC LT(2, KC_SPC)
#define LT1_ENT LT(1, KC_ENT)
#define MO3     MO(3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
               KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
               QK_GESC,  LCTL_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LGUI_T(KC_F),  KC_G,       KC_H,    RGUI_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), RCTL_T(KC_SCLN), KC_QUOTE,
               KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLASH,
               KC_LCTL,  KC_LALT,                   KC_LGUI, LT1_ENT,          LT2_SPC, KC_DEL,                 KC_LEFT, KC_DOWN, KC_RGHT
             ),
    [1] = LAYOUT(
               QK_BOOT,    KC_NO,   KC_NO,   KC_PIPE,   KC_MINS,   KC_UNDS,               KC_EQL,   KC_PLUS,   KC_BSLS,   KC_NO,   KC_NO,  KC_NO,
               EE_CLR,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_BSLS,
               KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_BSLS, KC_PIPE, KC_NO,   KC_NO,   KC_NO,  KC_NO,
               KC_VOLD,    KC_MUTE,                   KC_VOLU, KC_TRNS,          MO3, KC_NO,                      KC_NO,   KC_NO,  KC_NO
             ),
    [2] = LAYOUT(
               RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_NO,   KC_NO,   KC_NO,
               KC_NO,     KC_NO,   KC_LCBR, KC_LPRN, KC_LBRC, KC_NO,                   KC_NO,   KC_RBRC, KC_RPRN, KC_RCBR, KC_NO,   KC_NO,
               KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_EQL,  KC_NO,            KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
               KC_NO,     KC_NO,                     KC_NO,   MO3,            KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO
             ),
    [3] = LAYOUT(
               QK_BOOT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
               KC_NO,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
               KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
               KC_NO,    KC_NO,                     KC_NO,   KC_NO,            KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO
             ),
};
