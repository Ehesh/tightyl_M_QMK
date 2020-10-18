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

#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39\
)\
LAYOUT(\
XXX, K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, XXX,\
XXX, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, XXX,\
XXX, K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, XXX,\
               XXX, XXX, K32, K33, K34,      K35, K36, K37, XXX, XXX\
)
