#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1
#define _ADJUST 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYMB,
  NAV,
  ADJUST,
};

// Shortcut to make keymap more readable

#define KC_LTOP LT(2, KC_LCTL)
#define KC_RTOP LT(2, KC_LCTL)
#define KC_UE RALT(KC_Y)
#define KC_OE RALT(KC_P)
#define KC_AE RALT(KC_Q)
#define KC_SZ RALT(KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                             KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_LPRN,                          KC_RPRN , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_LBRC,                          KC_RBRC , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,KC_LTOP , KC_PGDN,        KC_HOME , KC_RTOP, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_LCTL , KC_NO  , KC_NO  , KC_LALT,      KC_LGUI,    KC_BSPC , KC_DEL         , KC_ENT , KC_SPC ,     MO(1)  ,      KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                             KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS , KC_EXLM, KC_AT  , KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS,                           KC_NO  , KC_PSLS, KC_P7  , KC_P8  , KC_P9  , KC_PMNS, KC_NO  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS , KC_HASH, KC_DLR , KC_LBRC, KC_RBRC, KC_GRV , KC_TRNS,                           KC_TRNS, KC_PAST, KC_P4  , KC_P5  , KC_P6  , KC_PPLS, KC_NO  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS , KC_PERC, KC_CIRC, KC_LPRN, KC_RPRN, KC_TILD, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_NO  , KC_P1  , KC_P2  , KC_P3  , KC_PENT, KC_NO  ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS    , KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS,     KC_P0,          KC_P0, KC_PDOT, KC_PENT, KC_NO 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO   , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                             KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_NO  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                           KC_NO  , KC_NO  , KC_UE  , KC_NO  , KC_OE  , KC_NO  , KC_NO  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO   , KC_AE  , KC_SZ  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                           KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,         KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_NO   , KC_NO  , KC_NO  , KC_NO  ,      KC_NO  ,     KC_NO  , KC_NO  ,         KC_NO  , KC_NO  ,     KC_NO  ,      KC_NO  , KC_NO  , KC_NO  , KC_NO  
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  )
};
