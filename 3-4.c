//2018/10/11 10:15
//u306065 K.Kazuki
#include<stdio.h>
#include<stdlib.h>

int main(void){
  int input;
  printf("Input a positive integer\n");
  while(1){
    scanf("%d",&input);
    
    //-1以外の負数の入力が検出された場合強制終了する
    if(input < -1){
      exit(EXIT_FAILURE);
    }

    if(input % 10 == 0){
      printf("%d is a multiple of 2 and 5\n",input);
    }else if(input % 5 == 0){
      printf("%d is a multiple of 5\n",input);
    }else if(input % 2 == 0){
      printf("%d is a multiple of 2\n",input);
    }else if(input == -1){
      break;
    }else{
      printf("%d is not a multiple of 2 and 5\n",input);
    }
  }
  return 0;
}
