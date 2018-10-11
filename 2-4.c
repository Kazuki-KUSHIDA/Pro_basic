//2018/09/27 10:06
//u306065 Kazuki_Kushida
//2-3.c

#include<stdio.h>
int main(void){
  int data[3];
  int i,max=-2147483648,min=2147483647;
  
  printf("三つの整数を入力してください\n");

  for(i=0;i<3;i++){
    printf("整数（No.%d）：",i+1);
    scanf("%d",&data[i]);
    if(data[i]>max){
      max=data[i];
    }
    if(data[i]<min){
      min=data[i];
    }
  }

  printf("最大値：%d\n最小値：%d\n",max,min);

  return 0;
}
