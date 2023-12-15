#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

enum layers {
    QWERTY = 0,
    NUM,
    SYM,
    MOUSE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: QWERTY
 * ,------.------.------.------.------.                       ,------.------.------.------.------.
 * |   Q  |   W  |   E  |   R  |   T  |                       |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------|                       |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |                       |   H  |   J  |   K  |   L  | ' *  |
 * |------+------+------+------+------|                       |------+------+------+------+------|
 * | Shift| Ctrl | Alt  | Win  |      |                       |      |      | Alt  | Ctrl | Shift|
 * |   Z  |   X  |   C  |   V  |   B  |                       |   N  |   M  | , ;  | . :  | - _  |
 * `------'------'------+------+------+------.         ,------+------+------+------'------'------'
 *                      |      | Sym  | Shift|         |      | Num  |      |
 *                      |  Tab | Bksp | Esc  |         | Enter| Space| Win  |
 *                      `------'------'------'         `------'------'------'
 */
    [QWERTY] = LAYOUT_split_3x5_3(
      KC_Q  ,  KC_W  ,  KC_E  ,   KC_R ,   KC_T ,                         KC_Y,  KC_U ,  KC_I ,   KC_O ,   KC_P ,
      KC_A  ,  KC_S  ,  KC_D  ,   KC_F ,   KC_G ,                         KC_H,  KC_J ,  KC_K ,   KC_L , SE_QUOT,
      SFT_T(KC_Z), CTL_T(KC_X), ALT_T(KC_C), WIN_T(KC_V), KC_B ,          KC_N,  KC_M ,  ALT_T(KC_COMM), CTL_T(KC_DOT) , SFT_T(SE_MINS),
                         KC_TAB, LT(SYM,KC_BSPC), SFT_T(KC_ESC),          KC_ENT, LT(NUM,KC_SPC), KC_LWIN
    ),

/*
 * Num Layer: Numbers, navigation, audio, brightness and RGB lighting
 * ,------.------.------.------.------.                       ,------.------.------.------.------.
 * |  1   |  2   |  3   |  4   |  5   |                       |  6   |  7   |  8   |  9   |  0   |
 * |------+------+------+------+------|                       |------+------+------+------+------|
 * |      | Mute | Vol- | Vol+ |RgbTog|                       |  Left| Down | Up   | Right|      |
 * |------+------+------+------+------|                       +------+------+------+------+------|
 * |      |      | Br-  | Br+  |RgbMod|                       |      |  Ö   |  Ä   |  Å   |      |
 * `------'------'------+------+------+------.         ,------+------+------+------'------'------'
 *                      |      |      |      |         |      |(hold)|      |
 *                      `------'------'------'         `------'------'------'
 */
    [NUM] = LAYOUT_split_3x5_3(
        KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,                          KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 ,
      _______, KC_MUTE, KC_VOLD, KC_VOLU, RGB_TOG,                        KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______, 
      KC_TRNS, KC_TRNS, ALT_T(KC_BRID), WIN_T(KC_BRIU), RGB_MOD,                        _______, WIN_T(SE_ODIA), ALT_T(SE_ADIA), CTL_T(SE_ARNG), KC_TRNS, 
                        KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS
    ),

/*
 * Sym Layer: Symbols
 * ,------.------.------.------.------.                       ,------.------.------.------.------.
 * |  !   |  "   |  #   |  $   |  %   |                       |  &   |  /   |  (   |  )   |  =   |
 * |------+------+------+------+------|                       |------+------+------+------+------|
 * |  |   |  @   |  <   |  >   |      |                       |  \   |  {   |  [   |  ]   |  }   |
 * |------+------+------+------+------|                       |------+------+------+------+------|
 * |      |      |      |      |      |                       |  ~   |  +   |  ?   |  ^   |  `   |
 * `-------------+------+------+------+------.         ,------+------+------+------+-------------'
 *                      |      |(hold)|      |         |      |      |      |
 *                      `------'------'------'         `------'------'------'
 */
    [SYM] = LAYOUT_split_3x5_3(
      SE_EXLM, SE_DQUO, SE_HASH, SE_DLR , SE_PERC,                        SE_AMPR, SE_SLSH, SE_LPRN, SE_RPRN, SE_EQL ,
      SE_PIPE, SE_AT  , SE_LABK, SE_RABK, _______,                        SE_BSLS, SE_LCBR, SE_LBRC, SE_RBRC, SE_RCBR,
      KC_TRNS, DT_PRNT, DT_DOWN, DT_UP, _______,                        SE_TILD, SE_PLUS, SE_QUES, SE_CIRC, SE_GRV ,
                        KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS
    ),

/*
 * Mouse Layer: Mouse keys
 * ,------.------.------.------.------.                       ,------.------.------.------.------.
 * |      |      |  M↑  |      |      |                       | WH←  | WH↑  | WH↓  | WH→  |      |
 * |------+------+------+------+------|                       |------+------+------+------+------|
 * | BTN4 |  M←  |  M↓  |  M→  |      |                       |      | BTN1 | BTN2 | BTN3 | BTN5 |
 * |------+------+------+------+------|                       |------+------+------+------+------|
 * |      |      |      |      |      |                       |      | ACC0 | ACC1 | ACC2 |      |
 * `-------------+------+------+------+------.         ,------+------+------+------+-------------'
 *                      |      |(hold)|      |         |      |(hold)|      |
 *                      `------'------'------'         `------'------'------'
 */
    [MOUSE] = LAYOUT_split_3x5_3(
      _______, _______, KC_MS_U, _______, _______,                        KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
      KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_R, _______,                        _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN5,
      _______, _______, _______, _______, _______,                        _______, KC_ACL0, KC_ACL1, KC_ACL2, _______,
                        _______, _______, _______,                        _______, _______, _______
    ),

};

layer_state_t layer_state_set_user(layer_state_t state){
  return update_tri_layer_state(state, NUM, SYM, MOUSE);
}
