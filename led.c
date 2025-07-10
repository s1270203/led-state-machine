#include<stdio.h>
#include "led.h"

/**
 * print_led_state
 *
 * @param state : 状態
 */
void print_led_state(LedState state){
  printf("Current State: %s\n",led_state_to_string(state));
  return;
}

/**
 * next_led_state
 * 
 * @param state : 現在の状態
 * @return 状態遷移後の状態
 */
LedState next_led_state(LedState state){
  return (state + 1) % 3;
}

/** 
 * led_state_to_string
 *
 * @param state : 現在の状態
 * @return 現在の状態の文字列 
 */
const char* led_state_to_string(LedState state){
  switch(state) {
    case LED_OFF:
      return "OFF";
    case LED_ON:
      return "ON";
    case LED_BLINK:
      return "BLINK";
    default:
      return "Unknown";
  }
}