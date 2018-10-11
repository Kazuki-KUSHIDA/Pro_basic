//2018/09/27 10:06
//u306065 Kazuki_Kushida
//2-3.c

#include<stdio.h>
#include<limits.h>
int main(void){
  int data[3];
  int i;
  //intの最小最大をやるのであればこれで設定する(非推奨)
  int max=INT_MIN;
  int min=INT_MAX;
  
  printf("三つの整数を入力してください\n");

  for(i=0;i<3;i++){
    printf("整数（No.%d）：",i+1);
    scanf("%d",&data[i]);
    if(i==0){//最初の入力を初期値にすると良い
      max=data[i];
      min=data[i];
    }
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
