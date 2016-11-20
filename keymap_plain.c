/*
Copyright 2016 Fred Sundvik <fsundvik@gmail.com>
Jun Wako <wakojun@gmail.com>

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

#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // layer 0 : default
        // left hand
        EQL,  1,   2,   3,   4,   5,   ESC,
        TAB,  Q,   W,   E,   R,   T,   LBRC,
        FN3, A,   S,   D,   F,   G,
        FN5, Z,   X,   C,   V,   B,    FN7,
        FN1, FN2, LCTL,LALT,LGUI,
                                      FN9, FN10,
                                           HOME,
                                 SPC,BSPC, END,
        // right hand
        GRV,  6,   7,   8,    9,   0,    MINS,
        RBRC, Y,   U,   I,    O,   P,    RBRC,
              H,   J,   K,    L,   SCLN, FN4,
        FN8,  N,   M,   COMM, DOT, SLSH, FN6,
                   LEFT,DOWN, UP,  RGHT, FN1,
        FN11, FN12,
        PGUP,
        PGDN, TAB, ENT
    ),
};
const uint16_t fn_actions[] = {
  ACTION_LAYER_SET(0, ON_PRESS),
  ACTION_LAYER_MOMENTARY(1), // layer 1 : fn                       FN1
  ACTION_LAYER_MOMENTARY(2), // layer 2: keypad                    FN2
  ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC), // control / esc          FN3
  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_QUOT), // control / "           FN4
  ACTION_MODS_TAP_TOGGLE(MOD_LSFT), // shift                       FN5
  ACTION_MODS_TAP_TOGGLE(MOD_RSFT), // shift                       FN6
  ACTION_MODS(MOD_LCTL | MOD_LALT | MOD_LSFT | MOD_LGUI), // hyper FN7
  ACTION_MODS(MOD_LCTL | MOD_LALT | MOD_LSFT), // meh              FN8
  ACTION_MODS_KEY(MOD_LCTL, KC_SPC), // tmux bind                  FN9
  ACTION_MODS_KEY(MOD_LGUI, KC_SPC), // spotligh                   FN10
  ACTION_MODS_KEY(MOD_LGUI, KC_C), // tmux bind                    FN11
  ACTION_MODS_KEY(MOD_LGUI, KC_V), // tmux bind                    FN12
};
