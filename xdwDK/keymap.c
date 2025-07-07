#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_UP,          KC_LEFT,        KC_RIGHT,       KC_DOWN,        TD(DANCE_1),                                    LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     TD(DANCE_2),    LALT(KC_SPACE), 
    KC_TAB,         KC_Q,           MT(MOD_LGUI, KC_W),KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           MT(MOD_LGUI, KC_Y),KC_MINUS,       KC_DELETE,      
    KC_ESCAPE,      MT(MOD_RALT, KC_A),MT(MOD_LALT, KC_R),KC_S,           LT(2, KC_T),    KC_G,                                           KC_M,           LT(5, KC_N),    KC_E,           MT(MOD_LALT, KC_I),MT(MOD_RALT, KC_O),KC_QUOTE,       
    KC_BSLS,        KC_Z,           KC_X,           KC_C,           LT(3, KC_D),    KC_V,                                           KC_K,           LT(4, KC_H),    KC_COMMA,       KC_DOT,         KC_DQUO,        KC_SLASH,       
                                                SFT_T(QK_REP),          LT(2, KC_BSPC),                                 LT(1, KC_ENTER),MT(MOD_RCTL, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_TILD,        KC_MINUS,       RALT(KC_1),     KC_NO,                                          KC_NO,          KC_LBRC,        KC_DLR,         KC_CIRC,        KC_RBRC,        KC_NO,          
    KC_GRAVE,       KC_SCLN,        KC_EXLM,        KC_PLUS,        KC_EQUAL,       KC_COLN,                                        KC_NO,          KC_LPRN,        KC_HASH,        KC_PERC,        KC_RPRN,        KC_NO,          
    KC_NO,          KC_RABK,        KC_BSLS,        KC_ASTR,        KC_PIPE,        KC_NO,                                          KC_NO,          KC_LCBR,        KC_AT,          KC_AMPR,        KC_RCBR,        KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_CIRC,        KC_ASTR,        KC_PLUS,        KC_NO,          KC_NO,                                          KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_NO,          
    KC_NO,          KC_EQUAL,       KC_BSLS,        KC_MINUS,       KC_TRANSPARENT, KC_NO,                                          ST_MACRO_0,     KC_1,           KC_2,           KC_3,           KC_DOT,         KC_COMMA,       
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_1,     KC_7,           KC_8,           KC_9,           KC_RABK,        KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_0
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          LALT(KC_RIGHT), KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_PAGE_UP,     KC_UP,          KC_PGDN,        KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,                                          KC_NO,          LCTL(LSFT(KC_TAB)),LALT(KC_LEFT),  LCTL(KC_TAB),   KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LALT(LCTL(LSFT(KC_S))),LCTL(KC_UP),    LALT(LCTL(KC_LEFT)),LCTL(KC_DOWN),  KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    CW_TOGG,        LALT(LCTL(LSFT(KC_W))),LCTL(KC_LEFT),  LALT(LCTL(KC_RIGHT)),LCTL(KC_RIGHT), LCTL(LSFT(KC_U)),                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          LALT(LCTL(KC_I)),LALT(LCTL(KC_D)),LCTL(KC_DELETE),                                KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    LCTL(LSFT(KC_BSPC)),LCTL(LSFT(KC_DELETE)),                                QK_LLCK,        KC_NO
  ),
  [5] = LAYOUT_voyager(
    QK_BOOT,        CM_TOGG,        CM_OFF,         CM_ON,          LED_LEVEL,      KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_SYSTEM_SLEEP,
    QK_DYNAMIC_TAPPING_TERM_UP,RGB_HUI,        RGB_SAI,        RGB_SPI,        RGB_VAI,        KC_NO,                                          KC_NO,          KC_PSCR,        KC_BRIGHTNESS_UP,KC_AUDIO_VOL_UP,KC_F20,         KC_NO,          
    QK_DYNAMIC_TAPPING_TERM_PRINT,TOGGLE_LAYER_COLOR,RGB_SLD,        RGB_MODE_FORWARD,RGB_TOG,        KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_MEDIA_PLAY_PAUSE,
    QK_DYNAMIC_TAPPING_TERM_DOWN,RGB_HUD,        RGB_SAD,        RGB_SPD,        RGB_VAD,        KC_NO,                                          KC_NO,          KC_NO,          KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F16,         KC_F15,         KC_F14,         KC_F13,         KC_NO,                                          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_NO,          
    KC_NO,          KC_F20,         KC_F19,         KC_F18,         KC_F17,         KC_NO,                                          KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_NO,          
    KC_NO,          KC_F24,         KC_F23,         KC_F22,         KC_F21,         KC_NO,                                          KC_NO,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    LALT(KC_SPACE), TD(DANCE_3),    LCTL(KC_V),     LCTL(KC_C),     LCTL(KC_X),     LCTL(KC_Z),                                     TD(DANCE_4),    KC_DOWN,        KC_LEFT,        KC_RIGHT,       KC_UP,          TD(DANCE_5),    
    KC_DELETE,      KC_MINUS,       KC_Y,           KC_U,           KC_L,           KC_J,                                           KC_B,           KC_P,           KC_F,           KC_W,           KC_Q,           KC_TAB,         
    KC_QUOTE,       KC_O,           KC_I,           KC_E,           KC_N,           KC_M,                                           KC_G,           KC_T,           KC_S,           KC_R,           KC_A,           KC_ESCAPE,      
    KC_SLASH,       KC_DQUO,        KC_DOT,         KC_COMMA,       KC_H,           KC_K,                                           KC_V,           KC_D,           KC_C,           KC_X,           KC_Z,           KC_BSLS,        
                                                    KC_SPACE,       KC_ENTER,                                       KC_BSPC,        KC_NO
  ),
  [8] = LAYOUT_voyager(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_ENTER,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_LEFT_SHIFT,                                  KC_BSPC,        KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_B, KC_V, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_G, KC_M, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_Q, KC_Z, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(7)),
    COMBO(combo1, TG(7)),
    COMBO(combo2, OSL(6)),
    COMBO(combo3, TG(8)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_T(QK_REP):
            return g_tapping_term -75;
        case LT(2, KC_BSPC):
            return g_tapping_term -50;
        case LT(1, KC_ENTER):
            return g_tapping_term -50;
        case MT(MOD_RCTL, KC_SPACE):
            return g_tapping_term -50;
        default:
            return g_tapping_term;
    }
}

const key_override_t key_override_test = ko_make_basic(MOD_MASK_SHIFT, KC_DQUO, KC_EXLM);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&key_override_test
};

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record, uint8_t* remembered_mods) {
  switch (keycode) {
    case SFT_T(QK_REP):
      return false;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(5)  SS_TAP(X_SPACE)SS_DELAY(5)  SS_TAP(X_1));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)SS_DELAY(5)  SS_TAP(X_SPACE)SS_DELAY(5)  SS_TAP(X_1));
    }
    break;
    
    case SFT_T(QK_REP):
    if (record->tap.count) {
        process_repeat_key(QK_REP, record);
        return false;
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
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

static tap dance_state[6];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
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


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if(state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_PAGE_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HOME); register_code16(KC_HOME);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_PAGE_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HOME); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if(state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_END); register_code16(KC_END);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_END); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_F));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_F)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_H)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_F)); register_code16(LCTL(KC_F));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_H)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_F));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_F)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_H)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_F)); register_code16(LCTL(KC_F));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_H)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if(state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_END); register_code16(KC_END);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_END); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if(state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_PAGE_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HOME); register_code16(KC_HOME);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_PAGE_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HOME); break;
    }
    dance_state[5].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
};
