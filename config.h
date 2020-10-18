#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    waffleman
#define PRODUCT         keyboard
#define DESCRIPTION     Waffle Board

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { F7, B1, B3, B2 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define USE_SERIAL
#define SOFT_SERIAL_PIN D2

#define MASTER_LEFT

#define TAPPING_TERM 200

#define DEBOUNCING_DELAY 5

#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif

#define PREVENT_STUCK_MODIFIERS

#endif
