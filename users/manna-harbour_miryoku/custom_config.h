// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_LAYER_EXTRA \
KC_ESC,  KC_Q, KC_W,    KC_E,   KC_R,       KC_Y, KC_U, KC_I,    KC_O,   KC_P,    \
KC_TAB,  KC_A, KC_S,    KC_D,   KC_F,       KC_H, KC_J, KC_K,    KC_L,   KC_QUOT, \
KC_LALT, KC_Z, KC_X,    KC_C,   KC_V,       KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, \
KC_G,    KC_B, KC_LCTL, KC_SPC, KC_LSFT,    LT(U_NAV,KC_ENT), LT(U_NUM,KC_BSPC), LT(U_FUN,KC_LGUI), KC_VOLU, KC_VOLD

#define PERMISSIVE_HOLD
#define ACHORDION_STREAK

// Disable all RGB animations to save memory and ensure clean layer transitions
// #undef ENABLE_RGB_MATRIX_ALPHAS_MODS
// #undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
// #undef ENABLE_RGB_MATRIX_BREATHING
// #undef ENABLE_RGB_MATRIX_BAND_SAT
// #undef ENABLE_RGB_MATRIX_BAND_VAL
// #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
// #undef ENABLE_RGB_MATRIX_CYCLE_ALL
// #undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
// #undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// #undef ENABLE_RGB_MATRIX_DUAL_BEACON
// #undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #undef ENABLE_RGB_MATRIX_RAINDROPS
// #undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #undef ENABLE_RGB_MATRIX_HUE_BREATHING
// #undef ENABLE_RGB_MATRIX_HUE_PENDULUM
// #undef ENABLE_RGB_MATRIX_HUE_WAVE
// #undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// #undef ENABLE_RGB_MATRIX_PIXEL_FLOW
// #undef ENABLE_RGB_MATRIX_PIXEL_RAIN
