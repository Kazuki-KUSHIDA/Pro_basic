//配列
//2018/11/08 9:32
//u306065
#include<stdio.h>
#define SIZE 10

int array[SIZE];

void input(void);
void output(void);

int main(void){
  input();
  output();
  return 0;
}

void input(void){
  int i;

  for( i = 0 ; i < SIZE ; i++ ){
    printf("データ[No.%2d]を入力してください: ",i+1);
    scanf("%d",&array[i]);
  }

}

void output(void){
  int i,sum = 0,max,min,max_ad,min_ad;//max(min)_ad:最大値(最小値)の格納されている添字
  
  max = array[0];
  min = array[0];

  putchar('\n');
  printf("データ一覧:\n");
  for( i = 0 ; i < SIZE ; i++ ){
    printf("[No.%2d] %d\n",i + 1,array[i]);
    sum += array[i];
    
    if(min > array[i]){
      min = array[i];
      min_ad = i;
    }else if(max < array[i]){
      max = array[i];
      max_ad = i;
    }
  }

  putchar('\n');
  printf("平均値 = %.2f\n",(float)sum / (float)i);
  printf("最大値 = %d (no.%d)\n",max,max_ad + 1);
  printf("最小値 = %d (no.%d)\n",min,min_ad + 1);
}
