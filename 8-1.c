//配列と関数
//u306065
//2018/11/15 9:35
#include <stdio.h>
#define SIZE 20
int max_array(int score[],int n);
int main(void){
  int score[SIZE];
  int i,n;
  printf("試験の最高点を計算します，人数を入力してください（1～20）:");
  scanf("%d",&n);

  for( i = 0 ; i < n ; i++ ){
    printf("No.%d:",i+1);
    scanf("%d",&score[i]);
  }

  printf("%d人の最高点は%d点です\n",n,max_array(score,n));
}

int max_array(int score[],int n){
  int max = score[0],i;
  for( i = 0 ; i < n ; i++ ){
    if( max < score[i] ){
      max = score[i];
    }
  }

  return max;
}
