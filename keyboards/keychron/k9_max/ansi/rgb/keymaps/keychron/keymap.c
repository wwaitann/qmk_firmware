/* Copyright 2024 ~ 2025 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"
#include "keymap_japanese.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
    FN1,
};

#define FN_MAC MO(MAC_FN)
#define FN_WIN MO(WIN_FN)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_61(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, FN_MAC,   MO(FN1),  KC_RCTL),

    [MAC_FN] = LAYOUT_ansi_61(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  KC_INS,   KC_PGUP,  KC_HOME,  _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  KC_UP,    KC_SNAP,  KC_PGDN,  KC_END,             _______,
        _______,            UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_DEL,             _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_ansi_61(
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,
        MO(3),    KC_LALT,  JP_MHEN,                                KC_SPC,                                 JP_HENK,  KC_RCTL,  MO(3),    KC_LGUI),

    [WIN_FN] = LAYOUT_ansi_61(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  KC_PSCR,  _______,  _______,  _______,
        _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

    [FN1] = LAYOUT_ansi_61(
        KC_TILD,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______)
};

//Override definitions
const key_override_t jp2_key_override    = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_2,    JP_AT,     (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jp6_key_override    = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_6,    JP_CIRC,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jp7_key_override    = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_7,    JP_AMPR,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jp8_key_override    = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_8,    JP_ASTR,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jp9_key_override    = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_9,    JP_LPRN,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jp0_key_override    = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_0,    JP_RPRN,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpunds_key_override = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_MINS, JP_UNDS,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpplus_key_override = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_CIRC, JP_PLUS,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpeql_key_override  = ko_make_with_layers(0,                                   JP_CIRC, JP_EQL,    (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpcoln_key_override = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_SCLN, JP_COLN,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpdquo_key_override = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_COLN, JP_DQUO,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpquot_key_override = ko_make_with_layers(0,                                   JP_COLN, JP_QUOT,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jptild_key_override = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), JP_ZKHK, JP_TILD,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpgrv_key_override  = ko_make_with_layers(0,                                   JP_ZKHK, JP_GRV,    (1 << WIN_BASE) | (1 << WIN_FN));

const key_override_t jplbrc_key_override  = ko_make_with_layers(0,                                   KC_LBRC, JP_LBRC,  (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jplbrcs_key_override = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), KC_LBRC, JP_LCBR,  (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jprbrc_key_override  = ko_make_with_layers(0,                                   KC_RBRC, JP_RBRC,  (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jprbrcs_key_override = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), KC_RBRC, JP_RCBR,  (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpbsls_key_override  = ko_make_with_layers(0,                                   KC_BSLS, JP_YEN,   (1 << WIN_BASE) | (1 << WIN_FN));
const key_override_t jpbslss_key_override = ko_make_with_layers(MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT), KC_BSLS, JP_PIPE,  (1 << WIN_BASE) | (1 << WIN_FN));

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
    &jp2_key_override,
    &jp6_key_override,
    &jp7_key_override,
    &jp8_key_override,
    &jp9_key_override,
    &jp0_key_override,
    &jpunds_key_override,
    &jpplus_key_override,
    &jpeql_key_override,
    &jpcoln_key_override,
    &jpdquo_key_override,
    &jpquot_key_override,
    &jptild_key_override,
    &jpgrv_key_override,
    &jplbrc_key_override,
    &jplbrcs_key_override,
    &jprbrc_key_override,
    &jprbrcs_key_override,
    &jpbsls_key_override,
    &jpbslss_key_override,
};