/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID \
    { 0x32, 0x5D, 0xA4, 0xC4, 0xA5, 0x41, 0xB7, 0xA7 }

#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 1 }

#define DYNAMIC_KEYMAP_MACRO_COUNT 16
#define VIAL_COMBO_ENTRIES 16        // number of combos used, each entry take 10 byte in EEPROM
#define VIAL_TAP_DANCE_ENTRIES 16    // number of tap dances used, each entry take 10 byte in EEPROM
#define VIAL_KEY_OVERRIDE_ENTRIES 16 // number of key override used, each entry take 10 byte in EEPROM

#define DYNAMIC_KEYMAP_LAYER_COUNT 16

// #define RGB_MATRIX_RAINBOW_INDICATORS
#define RGB_MATRIX_IDLE_TIMEOUT 1000 * 30 * 15
#define RGB_DISABLE_TIMEOUT 1000 * 60 * 30
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RGB_MATRIX_STARTUP_HUE 90
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
