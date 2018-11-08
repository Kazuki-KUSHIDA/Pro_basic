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
  int i,sum = 0;

  putchar('\n');
  printf("データ一覧:\n");
  for( i = 0 ; i < SIZE ; i++ ){
    printf("[No.%2d] %d\n",i+1,array[i]);
    sum += array[i];
  }

  putchar('\n');
  printf("合計値 = %d\n",sum);
}
