#include QMK_KEYBOARD_H
#include "secrets.h"

enum custom_keycodes { CPW_MAIN = SAFE_RANGE, C_UUML, C_OUML, C_AUML, C_SLIG, C_PASS };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_ortho_5x15(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_ESC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_BSPC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_DEL, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(2), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN, KC_LCTL, MO(3), MO(7), KC_LALT, KC_LGUI, KC_SPC, MO(1), KC_SPC, KC_LGUI, KC_LALT, KC_RCTL, MO(4), KC_LEFT, KC_DOWN, KC_RGHT),
                                                              [1] = LAYOUT_ortho_5x15(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, C_UUML, KC_TRNS, C_OUML, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, C_AUML, LALT(KC_S), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), KC_TRNS, MO(5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [2] = LAYOUT_ortho_5x15(KC_TRNS, LCTL(LGUI(KC_P1)), LCTL(LGUI(KC_P2)), LCTL(LGUI(KC_P3)), LCTL(LGUI(KC_P4)), LCTL(LGUI(KC_P5)), KC_TRNS, LCTL(LGUI(KC_P6)), LCTL(LGUI(KC_P7)), LCTL(LGUI(KC_P8)), LCTL(LGUI(KC_P9)), LCTL(LGUI(KC_P0)), LCTL(LGUI(KC_PMNS)), LCTL(LGUI(KC_PPLS)), KC_TRNS, KC_TRNS, C_PASS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [3] = LAYOUT_ortho_5x15(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [4] = LAYOUT_ortho_5x15(KC_TRNS, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_TRNS, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_F13), LCTL(KC_F14), LCTL(KC_F15), LSFT(KC_F16), LSFT(KC_F17), KC_TRNS, LSFT(KC_F18), LSFT(KC_F19), LSFT(KC_F20), LSFT(KC_F21), LSFT(KC_F22), LSFT(KC_F23), KC_TRNS, KC_TRNS, KC_TRNS, LALT(KC_F13), LALT(KC_F14), LALT(KC_F15), LALT(KC_F16), LALT(KC_F17), KC_TRNS, LALT(KC_F18), LALT(KC_F19), LALT(KC_F20), LALT(KC_F21), LALT(KC_F22), LALT(KC_F23), KC_TRNS, KC_TRNS, KC_TRNS, LGUI(KC_F13), LGUI(KC_F14), LGUI(KC_F15), LGUI(KC_F16), LGUI(KC_F17), KC_TRNS, LGUI(KC_F18), LGUI(KC_F19), LGUI(KC_F20), LGUI(KC_F21), LGUI(KC_F22), LGUI(KC_F23), KC_TRNS, KC_TRNS, KC_TRNS, HYPR(KC_F13), HYPR(KC_F14), HYPR(KC_F15), HYPR(KC_F16), HYPR(KC_F17), KC_TRNS, HYPR(KC_F18), HYPR(KC_F19), HYPR(KC_F20), HYPR(KC_F21), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [5] = LAYOUT_ortho_5x15(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [6] = LAYOUT_ortho_5x15(KC_TRNS, RGB_TOG, RGB_MOD, RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_K, RGB_M_X, RGB_M_G, RESET, KC_TRNS, KC_TRNS, RGB_HUI, RGB_HUD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAI, RGB_SAD, RGB_SPI, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_BRTG, BL_ON, BL_OFF, BL_INC, BL_DEC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [7] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case C_UUML:
            if (record->event.pressed) {
                if (!(keyboard_report->mods & (MOD_BIT(KC_LSFT)))) {
                    // when keycode QMKBEST is pressed
                    SEND_STRING(SS_LALT("u"));

                } else {
                    unregister_code(KC_LSFT);
                    SEND_STRING(SS_LALT("u"));
                    register_code(KC_LSFT);
                }
                SEND_STRING("u");
            }
            break;
        case C_OUML:
            if (record->event.pressed) {
                if (!(keyboard_report->mods & (MOD_BIT(KC_LSFT)))) {
                    // when keycode QMKBEST is pressed
                    SEND_STRING(SS_LALT("u"));

                } else {
                    unregister_code(KC_LSFT);
                    SEND_STRING(SS_LALT("u"));
                    register_code(KC_LSFT);
                }
                SEND_STRING("o");
            }
            break;
        case C_AUML:
            if (record->event.pressed) {
                if (!(keyboard_report->mods & (MOD_BIT(KC_LSFT)))) {
                    // when keycode QMKBEST is pressed
                    SEND_STRING(SS_LALT("u"));

                } else {
                    unregister_code(KC_LSFT);
                    SEND_STRING(SS_LALT("u"));
                    register_code(KC_LSFT);
                }
                SEND_STRING("a");
            }
            break;
        case C_PASS:
            if (record->event.pressed) {
                SEND_STRING(MAIN_PASS);
            }
            break;
    }
    return true;
};
