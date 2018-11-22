//多次元配列
//2018/11/22 11:09
//u306065
#include <stdio.h>
#define NSIZE 3
#define MSIZE 4
int main(void){
  int i,j;
  int room[NSIZE][MSIZE];

  printf("住人の年齢を入力して下さい\n");
  for( i = 0 ; i < NSIZE ; i++ ){
    printf("<< %d階 >>\n",i+1);
    for( j = 0 ; j < MSIZE ; j++ ){
      printf("%d号室:",j+1);
      scanf("%d",&room[i][j]);
    }
  }
  putchar('\n');
  printf("<< 年齢見取図 >>\n");
  for( i = 2 ; i >= 0 ; i-- ){
    printf("[%d階]",i+1);
    for( j = 0 ; j < MSIZE ; j++ ){
      printf(" (%d号室)",j+1);
      printf("%d歳",room[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
