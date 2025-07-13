#include<stdio.h>
#include "led.h"

/**
 * main.c
 *
 * LED状態を管理するステートマシンプログラム。
 * ユーザーが'n'キーを押すと次の状態に遷移し、'q'で終了する。
 *
 * ファイル構成
 * - led.{c,h} : 状態を表示する関数
 */

int main(){
  LedState state = LED_OFF;
  char input;
  
  while(1){
    printf("Current State: %s\n",led_state_to_string(state));
    if(state == LED_BLINK) printf("LED is blinking...\n");
    printf("Press 'n'=next, 'a'=auto, 's'=stop, 'q'=quit:\n");
    
    input = getchar();
    while(getchar() != '\n');
  
    if(input == 'n') {
      state = next_led_state(state);
    }else if(input == 'q')  {
      printf("Exiting...\n");
      break;
    }
  }

  return 0;
}