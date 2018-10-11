//2018/9/20 11:19
//u306065 櫛田 一樹
#include <stdio.h>
int main(void){
  int input;
  int i=0,max=0;

  while(i<4){
    printf("%d番目の値：",i+1);
    scanf("%d",&input);
    if(input>0){
      i++;
      if(max<input){
	      max=input;
      }
    }else{
      printf("値は正の数ではありません\n");
    }
  }

  printf("最も大きい値は%dです\n",max);
  return 0;
}


