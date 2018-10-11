//2018/09/25 14:50
//u306065 櫛田一樹
//1-2

#include<stdio.h>
int main(void){
  int x,y;
  for(y=9;y>0;y--){
    for(x=9;x>0;x--){
      printf("%d ",x*y);
    }
    putchar('\n');
  }
  return 0;
}
