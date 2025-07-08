#ifndef LED_H
#define LED_H

typedef enum{
  LED_OFF,
  LED_ON,
  LED_BLINK
} LedState;

void print_led_state(LedState state);

#endif