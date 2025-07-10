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
    printf("STEP %d: LED is now %s\n",i,led_state_to_string(state));
    if(state == 2) printf("%*s\n", 26, "LED is blinking...");
    state = next_led_state(state);
  }

  return 0;
}