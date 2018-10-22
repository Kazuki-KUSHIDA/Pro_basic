//4-6.c 関数の基礎
//2018/10/22 17:42
//u306065 K.Kazuki

#include<stdio.h>

void error_message(void);
int get_month(void);

int main(void){
  
  printf("誕生日まであと%dヶ月ですね\n", get_month() );
  
  return 0;
}

int get_month(void){
  int lim_month , i , month[2] ;

  for( i = 0 ; i < 2 ; i++ ){
    
    if( i == 0 ){
      printf("＜誕生日の月＞\n");
    }else{
      printf("＜現在の月＞\n");
    }

    while(1){
      printf("月：");
      scanf("%d",&month[i]);
      
      if(month[i] >= 1 && month[i] <= 12){
        break;
      }else{
        error_message();
        continue;
      }
    }
  }
  
  if( month[0] > month[1] ){
    lim_month = month[0] - month[1];
  }else{
    lim_month = ( month[0] + 12 ) - month[1];
  }

  return lim_month;
}

void error_message(void){
  printf("入力ミスです！\n");
}
    


  
  
  

