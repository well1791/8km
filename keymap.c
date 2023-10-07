#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif
#include "eeprom.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum planck_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
  _NAVR,
  _NAVL,
  _TABS,
  _MEDIA,
  _F1_12,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    MT(MOD_LALT, KC_S),MT(MOD_LSFT, KC_A),MT(MOD_LGUI, KC_I),LT(5,KC_E),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(4,KC_E),     MT(MOD_LGUI, KC_I),MT(MOD_LSFT, KC_A),MT(MOD_LALT, KC_S),
    KC_R,           MT(MOD_LALT, KC_O),MT(MOD_LCTL, KC_T),KC_N,           KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_N,           MT(MOD_LCTL, KC_T),MT(MOD_LALT, KC_O),KC_R
  ),

  [_LOWER] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_SCOLON,      KC_COLN,        KC_QUES,        KC_EXLM,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EXLM,        KC_QUES,        KC_COLN,        KC_SCOLON,
    KC_GRAVE,       KC_QUOTE,       KC_AT,          KC_BSLASH,      KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_BSLASH,      KC_AT,          KC_QUOTE,       KC_GRAVE
  ),

  [_RAISE] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_5,           KC_4,           KC_3,           KC_2,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_2,           KC_3,           KC_4,           KC_5,
    KC_9,           KC_8,           KC_7,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9
  ),

  [_ADJUST] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

  [_NAVR] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_ENTER,       KC_RIGHT,       KC_DOWN,        KC_LEFT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LGUI, KC_PGDOWN),TD(DANCE_0),    KC_TRANSPARENT,
    TO(0),          KC_BSPACE,      KC_UP,          KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, LGUI(KC_X),     KC_PGUP,        LGUI(KC_V),     LGUI(KC_Z)
  ),

  [_NAVL] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TD(DANCE_1),    MT(MOD_LGUI, KC_PGDOWN),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT,       KC_DOWN,        KC_LEFT,        KC_ENTER,
    LGUI(KC_Z),     RGUI(KC_V),     KC_PGUP,        LGUI(KC_X),     KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TAB,         KC_UP,          KC_BSPACE,      TO(0)
  ),

  [_TABS] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI(KC_TAB),   RGUI(RSFT(KC_RBRACKET)),LGUI(KC_W),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_W),     RGUI(RSFT(KC_RBRACKET)),LGUI(KC_TAB),   KC_TRANSPARENT,
    RGUI(KC_Q),     RCTL(KC_TAB),   LGUI(LSFT(KC_LBRACKET)),LGUI(LSFT(KC_T)),KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, LGUI(LSFT(KC_T)),LGUI(LSFT(KC_LBRACKET)),LCTL(KC_TAB),   LGUI(KC_Q)
  ),

  [_MEDIA] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    RGB_MOD,        KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_DOWN,KC_MEDIA_NEXT_TRACK,KC_BRIGHTNESS_DOWN,
    RESET,          KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_MEDIA_PREV_TRACK,KC_BRIGHTNESS_UP
  ),

  [_F1_12] = LAYOUT_planck_grid(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F5,          KC_F4,          KC_F3,          KC_F2,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F2,          KC_F3,          KC_F4,          KC_F5,
    KC_F9,          KC_F8,          KC_F7,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9
  ),

};

const uint16_t PROGMEM char_d_left[] = { LT(4,KC_E), MT(MOD_LGUI, KC_I), COMBO_END};
const uint16_t PROGMEM char_d_right[] = { LT(5,KC_E), MT(MOD_LGUI, KC_I), COMBO_END};
const uint16_t PROGMEM char_u[] = { MT(MOD_LGUI, KC_I), MT(MOD_LSFT, KC_A), COMBO_END};
const uint16_t PROGMEM char_l_left[] = { MT(MOD_LSFT, KC_A), LT(4,KC_E), COMBO_END};
const uint16_t PROGMEM char_l_right[] = { MT(MOD_LSFT, KC_A), LT(5,KC_E), COMBO_END};
const uint16_t PROGMEM char_c_left[] = { MT(MOD_LCTL, KC_T), LT(4,KC_E), COMBO_END};
const uint16_t PROGMEM char_c_right[] = { MT(MOD_LCTL, KC_T), LT(5,KC_E), COMBO_END};
const uint16_t PROGMEM char_m_left[] = { MT(MOD_LALT, KC_O), LT(4,KC_E), COMBO_END};
const uint16_t PROGMEM char_m_right[] = { MT(MOD_LALT, KC_O), LT(5,KC_E), COMBO_END};
const uint16_t PROGMEM char_h[] = { MT(MOD_LCTL, KC_T), MT(MOD_LSFT, KC_A), COMBO_END};
const uint16_t PROGMEM char_g_left[] = { MT(MOD_LALT, KC_S), LT(4,KC_E), COMBO_END};
const uint16_t PROGMEM char_g_right[] = { MT(MOD_LALT, KC_S), LT(5,KC_E), COMBO_END};
const uint16_t PROGMEM char_w_left[] = { KC_R, LT(4,KC_E), COMBO_END};
const uint16_t PROGMEM char_w_right[] = { KC_R, LT(5,KC_E), COMBO_END};
const uint16_t PROGMEM char_b[] = { MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_A), COMBO_END};
const uint16_t PROGMEM char_p[] = { MT(MOD_LCTL, KC_T), MT(MOD_LALT, KC_O), COMBO_END};
const uint16_t PROGMEM char_f[] = { KC_N, MT(MOD_LCTL, KC_T), COMBO_END};
const uint16_t PROGMEM char_y[] = { KC_N, MT(MOD_LALT, KC_O), COMBO_END};
// const uint16_t PROGMEM char_j[] = { KC_R, MT(MOD_LALT, KC_O), COMBO_END};
const uint16_t PROGMEM char_v[] = { KC_R, MT(MOD_LALT, KC_O), COMBO_END};
const uint16_t PROGMEM char_q[] = { KC_R, KC_N, COMBO_END};
// const uint16_t PROGMEM char_v[] = { KC_N, MT(MOD_LSFT, KC_A), COMBO_END};
const uint16_t PROGMEM char_z[] = { KC_N, MT(MOD_LSFT, KC_A), COMBO_END};
// const uint16_t PROGMEM char_k[] = { MT(MOD_LALT, KC_S), KC_N, COMBO_END};
const uint16_t PROGMEM char_j[] = { MT(MOD_LALT, KC_S), KC_N, COMBO_END};
const uint16_t PROGMEM char_x[] = { MT(MOD_LALT, KC_O), MT(MOD_LALT, KC_S), COMBO_END};
// const uint16_t PROGMEM char_z[] = { MT(MOD_LALT, KC_O), MT(MOD_LGUI, KC_I), COMBO_END};
const uint16_t PROGMEM char_k[] = { MT(MOD_LALT, KC_O), MT(MOD_LGUI, KC_I), COMBO_END};
const uint16_t PROGMEM combo18[] = { KC_EXLM, KC_QUES, COMBO_END};
const uint16_t PROGMEM combo19[] = { KC_BSLASH, KC_AT, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_QUES, KC_COLN, COMBO_END};
const uint16_t PROGMEM combo21[] = { KC_AT, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM combo22[] = { KC_EXLM, KC_COLN, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_BSLASH, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM combo24[] = { KC_EXLM, KC_AT, COMBO_END};
const uint16_t PROGMEM combo25[] = { KC_EXLM, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM combo26[] = { KC_EXLM, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo27[] = { KC_BSLASH, KC_GRAVE, COMBO_END};
const uint16_t PROGMEM combo28[] = { KC_EXLM, KC_GRAVE, COMBO_END};
const uint16_t PROGMEM combo29[] = { KC_COLN, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM combo30[] = { KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM combo31[] = { KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM combo32[] = { KC_2, KC_4, COMBO_END};
const uint16_t PROGMEM combo33[] = { KC_6, KC_8, COMBO_END};
const uint16_t PROGMEM combo34[] = { KC_2, KC_7, COMBO_END};
const uint16_t PROGMEM combo35[] = { KC_2, KC_8, COMBO_END};
const uint16_t PROGMEM combo36[] = { KC_2, KC_5, COMBO_END};
const uint16_t PROGMEM combo37[] = { KC_7, KC_8, COMBO_END};
const uint16_t PROGMEM combo38[] = { KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM combo39[] = { KC_9, KC_2, COMBO_END};
const uint16_t PROGMEM combo40[] = { KC_6, KC_7, COMBO_END};
const uint16_t PROGMEM combo41[] = { KC_6, KC_9, COMBO_END};
const uint16_t PROGMEM combo42[] = { KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM spc_left[] = { LT(4,KC_E), MT(MOD_LGUI, KC_I), MT(MOD_LSFT, KC_A), COMBO_END};
const uint16_t PROGMEM spc_right[] = { LT(5,KC_E), MT(MOD_LGUI, KC_I), MT(MOD_LSFT, KC_A), COMBO_END};
const uint16_t PROGMEM combo44[] = { MT(MOD_LGUI, KC_I), MT(MOD_LSFT, KC_A), MT(MOD_LALT, KC_S), COMBO_END};

const uint16_t PROGMEM osl_tabs_left[] = { MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_A), LT(4,KC_E), COMBO_END};
const uint16_t PROGMEM osl_tabs_right[] = { MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_A), LT(5,KC_E), COMBO_END};
const uint16_t PROGMEM osl_syms_left[] = { MT(MOD_LALT, KC_O), MT(MOD_LCTL, KC_T), LT(4,KC_E), COMBO_END};
const uint16_t PROGMEM osl_syms_right[] = { MT(MOD_LALT, KC_O), MT(MOD_LCTL, KC_T), LT(5,KC_E), COMBO_END};
const uint16_t PROGMEM osl_nums_left[] = { LT(4,KC_E), MT(MOD_LGUI, KC_I), MT(MOD_LALT, KC_O), COMBO_END};
const uint16_t PROGMEM osl_nums_right[] = { LT(5,KC_E), MT(MOD_LGUI, KC_I), MT(MOD_LALT, KC_O), COMBO_END};
const uint16_t PROGMEM osm_meh[] = { KC_N, MT(MOD_LCTL, KC_T), MT(MOD_LALT, KC_O), COMBO_END};
const uint16_t PROGMEM osm_shift[] = { MT(MOD_LCTL, KC_T), MT(MOD_LALT, KC_O), KC_R, COMBO_END};
const uint16_t PROGMEM osl_media_left[] = { MT(MOD_LSFT, KC_A), MT(MOD_LCTL, KC_T), LT(4,KC_E), COMBO_END};
const uint16_t PROGMEM osl_media_right[] = { MT(MOD_LSFT, KC_A), MT(MOD_LCTL, KC_T), LT(5,KC_E), COMBO_END};
const uint16_t PROGMEM osl_f1_12[] = { MT(MOD_LALT, KC_S), MT(MOD_LSFT, KC_A), MT(MOD_LCTL, KC_T), COMBO_END};
const uint16_t PROGMEM combo52[] = { MT(MOD_LCTL, KC_T), MT(MOD_LSFT, KC_A), KC_N, COMBO_END};
const uint16_t PROGMEM combo53[] = { KC_QUOTE, KC_GRAVE, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(char_d_left, KC_D),
    COMBO(char_d_right, KC_D),
    COMBO(char_u, KC_U),
    COMBO(char_l_left, KC_L),
    COMBO(char_l_right, KC_L),
    COMBO(char_c_left, KC_C),
    COMBO(char_c_right, KC_C),
    COMBO(char_m_left, KC_M),
    COMBO(char_m_right, KC_M),
    COMBO(char_h, KC_H),
    COMBO(char_g_left, KC_G),
    COMBO(char_g_right, KC_G),
    COMBO(char_w_left, KC_W),
    COMBO(char_w_right, KC_W),
    COMBO(char_b, KC_B),
    COMBO(char_p, KC_P),
    COMBO(char_f, KC_F),
    COMBO(char_y, KC_Y),
    COMBO(char_j, KC_J),
    COMBO(char_q, KC_Q),
    COMBO(char_v, KC_V),
    COMBO(char_k, KC_K),
    COMBO(char_x, KC_X),
    COMBO(char_z, KC_Z),
    COMBO(combo18, KC_LCBR),
    COMBO(combo19, KC_RCBR),
    COMBO(combo20, KC_LBRACKET),
    COMBO(combo21, KC_RBRACKET),
    COMBO(combo22, KC_LABK),
    COMBO(combo23, KC_RABK),
    COMBO(combo24, KC_DQUO),
    COMBO(combo25, KC_HASH),
    COMBO(combo26, KC_UNDS),
    COMBO(combo27, KC_AMPR),
    COMBO(combo28, KC_PIPE),
    COMBO(combo29, KC_EQUAL),
    COMBO(combo30, KC_0),
    COMBO(combo31, KC_1),
    COMBO(combo32, KC_LPRN),
    COMBO(combo33, KC_RPRN),
    COMBO(combo34, KC_COMMA),
    COMBO(combo35, KC_DOT),
    COMBO(combo36, KC_SLASH),
    COMBO(combo37, KC_MINUS),
    COMBO(combo38, KC_DLR),
    COMBO(combo39, KC_PLUS),
    COMBO(combo40, KC_ASTR),
    COMBO(combo41, KC_TILD),
    COMBO(combo42, KC_CIRC),
    COMBO(spc_left, KC_SPACE),
    COMBO(spc_right, KC_SPACE),
    COMBO(combo44, KC_ESCAPE),
    COMBO(osl_tabs_left, OSL(6)),
    COMBO(osl_tabs_right, OSL(6)),
    COMBO(osl_syms_left, OSL(1)),
    COMBO(osl_syms_right, OSL(1)),
    COMBO(osl_nums_left, OSL(2)),
    COMBO(osl_nums_right, OSL(2)),
    COMBO(osm_meh, OSM(MOD_MEH)),
    COMBO(osm_shift, OSM(MOD_LSFT)),
    COMBO(osl_media_left, OSL(7)),
    COMBO(osl_media_right, OSL(7)),
    COMBO(osl_f1_12, OSL(8)),
    COMBO(combo52, KC_CAPSLOCK),
    COMBO(combo53, KC_PERC),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247}, {41,167,247} },

    [2] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [3] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [6] = { {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229}, {0,227,229} },

    [7] = { {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255} },

    [8] = { {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114}, {206,118,114} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

#ifdef AUDIO_ENABLE
bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo+=1;
            } else {
                muse_tempo-=1;
            }
        }
    } else {
        if (clockwise) {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_DOWN);
            unregister_code(KC_MS_WH_DOWN);
        #else
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        #endif
        } else {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_UP);
            unregister_code(KC_MS_WH_UP);
        #else
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        #endif
        }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
    case RAISE:
    case LOWER:
        return false;
    default:
        return true;
    }
}
#endif

uint16_t layer_state_set_user(uint16_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_C));
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_C)); register_code16(LGUI(KC_C));
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_C));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_C)); register_code16(LGUI(KC_C));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
    }
    dance_state[1].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};
