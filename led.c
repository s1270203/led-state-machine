#include<stdio.h>
#include "led.h"

/**
 * print_led_state
 *
 * @param state : 状態
 */
void print_led_state(LedState state){
  switch(state) {
    case LED_OFF:
      printf("Current State: OFF\n");
      break;
    case LED_ON:
      printf("Current State: ON\n");
      break;
    case LED_BLINK:
      printf("Current State: BLINK\n");
      break;
    default:
      printf("Unknown State\n");
      break;
  }
  return;
}