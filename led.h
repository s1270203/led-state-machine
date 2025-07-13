#ifndef LED_H
#define LED_H

typedef enum{
  LED_OFF,
  LED_ON,
  LED_BLINK,
} LedState;

void print_led_state(LedState state);
LedState next_led_state(LedState state);
const char* led_state_to_string(LedState state);

#endif