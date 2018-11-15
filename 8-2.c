//配列と関数
//u306065
//2018/11/15
#include <stdio.h>
#define SIZE 10
void add_data(int array[],int n);
int main(void){
  int array[SIZE],n,i;
  
  printf("データ数を入力して下さい（1～10）:");
  scanf("%d",&n);

  printf("データを入力して下さい\n");
  for( i = 0 ; i < n ; i++ ){
    printf("No.%d:",i+1);
    scanf("%d",&array[i]);
  }
  
  add_data(array,n);
  return 0;
}

void add_data(int array[],int n){
  int i;
  printf("計算して並べました\n");
  for( i = 0 ; i < n ; i++ ){
    array[i+1] += array[i];
    array[i] *= 10;
    printf("No.%d:%d\n",i+1,array[i]);
  }
}

