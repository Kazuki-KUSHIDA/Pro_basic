//2018/09/27 9:48
//u306065 Kazuki_Kushida
//2-2.c

#include<stdio.h>
int main(void){
  int input;
  printf("正の整数を入力してください：");
  scanf("%d",&input);
  if(input%2==0){
    printf("%dは偶数です\n",input);
  }else{
    printf("%dは奇数です\n",input);
  }
  return 0;
}
