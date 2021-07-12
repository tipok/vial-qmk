/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define DEVICE_VER 0x0001
#define VENDOR_ID 0x320F
#define PRODUCT_ID 0x5044
#define MANUFACTURER Glorious
#define PRODUCT GMMK Pro

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS \
    { B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10 }
#define MATRIX_COL_PINS \
    { A0, A1, A2, A3, A4, A8, A9, A10 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 3

#define TAP_CODE_DELAY 10
#define ENCODERS_PAD_A \
    { C15 }
#define ENCODERS_PAD_B \
    { C14 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


/* 1000Hz USB polling - it's the default on stock firmware */
#define USB_POLLING_INTERVAL_MS 1

/* Send up to 4 key press events per scan */
#define QMK_KEYS_PER_SCAN 4

/* Set debounce time to 5ms */
#define DEBOUNCE 5

/* SPI Config for LED Driver */
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A6
#define SPI_MISO_PIN A7

#define SPI_SS_DRIVER_1_PIN B13
#define ENABLE_DRIVER_1_PIN C13
#define SPI_SS_DRIVER_2_PIN B14
#define ENABLE_DRIVER_2_PIN C13
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 175

#define SW_LINES_ENABLE_DRIVER_1 SW_LINES_ENABLED_1_TO_12
#define SW_LINES_ENABLE_DRIVER_2 SW_LINES_ENABLED_1_TO_11

#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 66
#define DRIVER_2_LED_TOTAL 32
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_UP_DOWN
#define RGB_MATRIX_STARTUP_SAT 255
#define RGB_MATRIX_STARTUP_VAL 192
#define RGB_MATRIX_STARTUP_SPD 30

#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#define RGB_DISABLE_TIMEOUT 0

#endif //RGB_MATRIX_ENABLE

#define VIAL_KEYBOARD_UID {0x81, 0xD2, 0x8A, 0x89, 0x17, 0x36, 0x53, 0x4B}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 10 }
#define VIAL_UNLOCK_COMBO_COLS { 3, 4 }
#define VIAL_ENCODER_KEYCODE_DELAY 25
