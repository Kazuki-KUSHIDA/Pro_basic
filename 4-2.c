//4-2.c 関数の基礎
//2018/10/22 16:47
//u306065 K.Kazuki

#include <stdio.h>

void error_message(void);

int main(void){
  int input;

  printf("奇数を入力して下さい：");
  scanf("%d",&input);

  if( input % 2 == 0 ){
    error_message();
  }else{
    printf("%dは奇数です\n",input);
  }

  return 0;
}

void error_message(void){
  printf("入力ミスです！\n");
}
