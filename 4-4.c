//4-4.c 関数の基礎
//2018/10/22 17:14
//u306065 K.Kazuki
#include <stdio.h>

void draw_char(int a_number,int s_number);

int main(void){
  int aster , sharp;

  printf("アスタリスクの数：");
  scanf("%d",&aster);
  printf("シャープの数：");
  scanf("%d",&sharp);

  draw_char(aster,sharp);

  return 0;
}

void draw_char(int a_number,int s_number){
  int i;
  for( i = 0 ; i < a_number ; i++){
    putchar('*');
  }
  for( i = 0 ; i < s_number ; i++){
    putchar('#');
  }
  putchar('\n');
}
