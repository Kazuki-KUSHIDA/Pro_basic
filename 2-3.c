//2018/09/27 9:57
//u306065 Kazuki_Kushida
//2-3.c

#include<stdio.h>
int main(void){
  int data_a,data_b;

  printf("二つの整数を入力してください\n");
  printf("整数A：");
  scanf("%d",&data_a);
  printf("整数B：");
  scanf("%d",&data_b);

  if(data_a>data_b){
    printf("大きい方の値は%dです\n小さい方の値は%dです\n",data_a,data_b);
  }else if(data_b>data_a){
    printf("大きい方の値は%dです\n小さい方の値は%dです\n",data_b,data_a);
  }else{
    printf("両方とも%dです\n",data_a);
  }

  return 0;
}
