//4-3.c 関数の基礎
//2018/10/22 17:00
//u306065 K.Kazuki
#include<stdio.h>

int get_month(void);

int main(void){

  printf("あなたは%d月生まれですね\n", get_month() );

  return 0;
}

int get_month(void){
  int month;

  printf("誕生日は何月ですか\n");
  
  while(1){
    printf("月：");
    scanf("%d",&month);
    
    if( month >= 1 && month <= 12 ){
      break;
    }else{
      printf("入力ミスです！\n");
    }
  }

  return month;
}

    
