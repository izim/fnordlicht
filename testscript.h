#include "static_scripts.h"

/* testscript */
static const uint8_t testscript_flash1[] PROGMEM = {
    MACRO_WAIT(_BV(CHANNEL_RED)),
    MACRO_SET_CHANNEL(CHANNEL_BLUE, 0xff),
    MACRO_WAIT(_BV(CHANNEL_RED)),
    MACRO_SET_CHANNEL(CHANNEL_BLUE, 0),
    MACRO_JUMP(-4),
    MACRO_STOP()
                        };

static const uint8_t testscript_flash2[] PROGMEM = {
    MACRO_FADE_CHANNEL(CHANNEL_RED, 255, 0x100),
    MACRO_WAIT(_BV(CHANNEL_RED)),
    MACRO_FADE_CHANNEL(CHANNEL_RED, 100, 0x100),
    MACRO_WAIT(_BV(CHANNEL_RED)),
    MACRO_JUMP(-4),
    };


static const uint8_t testscript_eeprom[] EEMEM = {
    MACRO_FADE_CHANNEL(CHANNEL_GREEN, 255, 0xf00),
    MACRO_WAIT(_BV(CHANNEL_GREEN)),
    MACRO_FADE_CHANNEL(CHANNEL_GREEN, 0, 0x100),
    MACRO_WAIT(_BV(CHANNEL_GREEN)),
    MACRO_JUMP(-4)
    };