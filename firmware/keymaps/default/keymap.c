// Copyright 2026 devoymac
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Layout base (6 filas x 7 columnas por mitad, intercalado izq/der).
// Es un punto de partida: ajusta las teclas a tu layout ISO-ES real.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_6x7(
    KC_ESC, KC_7, KC_1, KC_8, KC_2, KC_9, KC_3, KC_0, KC_4, KC_MINS, KC_5, KC_EQL, KC_6, KC_BSPC,
    KC_TAB, KC_U, KC_Q, KC_I, KC_W, KC_O, KC_E, KC_P, KC_R, KC_LBRC, KC_T, KC_RBRC, KC_Y, KC_BSLS,
    KC_CAPS, KC_J, KC_A, KC_K, KC_S, KC_L, KC_D, KC_SCLN, KC_F, KC_QUOT, KC_G, KC_ENT, KC_H, KC_ENT,
    KC_LSFT, KC_M, KC_Z, KC_COMM, KC_X, KC_DOT, KC_C, KC_SLSH, KC_V, KC_RSFT, KC_B, KC_RSFT, KC_N, KC_RSFT,
    KC_LCTL, KC_SPC, KC_LGUI, KC_SPC, KC_LALT, KC_SPC, KC_SPC, KC_RALT, KC_SPC, KC_RGUI, KC_SPC, KC_RCTL, KC_SPC, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    )
};
