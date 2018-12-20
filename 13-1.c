//応用
//u306065
//2018/12/20
#include<stdio.h>
#define N 10
int main(void){
  int data[N][2];
  int input;

  while(1){
    printf("入力データ数を入力して下さい:");
    scanf("%d",&input);
    if(input <= 10&&input >= 0){
      break;
    }
    printf("データ数が10を超えているか負です\n");
  }

  for(int i = 0; i < input; i++){
    for(int j = 0; j < 2; j++){
      while(1){
        printf("データNo.%3d-",i+1);
        if( j == 0 ){
          putchar('a');
        }else{
          putchar('b');
        }
        putchar(':');
      
        scanf("%d",&data[i][j]);
        if(data[i][j] <= 100 && data[i][j] >= 0){
          break;
        }
        printf("入力データが100を超えているか負です\n");
      }
    }
  }
  putchar('\n');
  printf("入力された値を表示します\n");
  for(int i = 0; i < input; i++){
    printf("[No.%2d] (a) %3d (b) %3d\n",i+1,data[i][0],data[i][1]);
  }
  return 0;
}
    
