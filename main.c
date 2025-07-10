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
  LedState state = 0;
  for(int i = 0; i < 5; ++i){
    print_led_state(state);
    state = next_led_state(state);
  }

  return 0;
}