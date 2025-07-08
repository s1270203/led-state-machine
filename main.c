#include<stdio.h>
#include "led.h"

/**
 * main.c
 *
 *　
 *
 * ファイル構成
 * - led.{c,h} : 状態を表示する関数
 */

int main(){
  print_led_state(LED_OFF);
  print_led_state(LED_ON);
  print_led_state(LED_BLINK);
  return 0;
}