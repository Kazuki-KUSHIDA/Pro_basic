//配列
//2018/11/08 9:24
//u306065

#include <stdio.h>

void work(void);

int main(void){
  work();
  return 0;
}

void work(void){
  int array[5] = {1,2,3,4,5};
  int i , sum = 0;

  for( i = 0 ; i < 5 ; i++ ){
    sum += array[i];
  }
  printf("arrayの合計値 = %d\n",sum);
}
