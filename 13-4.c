//応用
//u306065
//2018/12/20 10:05
#include<stdio.h>
#define N 10
#define M 10

void average_calc(int data[N][2], double mean[N], int no);
int max_calc(double mean[N], int no);

int main(void){
  int data[N][2];
  double mean[N];
  int input,max_address;
  char id_num[N][M];

  while(1){
    printf("入力データ数を入力して下さい:");
    scanf("%d",&input);
    if(input <= 10&&input >= 0){
      break;
    }
    printf("データ数が10を超えているか負です\n");
  }
  
  for(int i = 0; i < input; i++){
    printf("データNo.%2dのID番号:",i+1);
    scanf("%*c%s",id_num[i]);
  }

  printf("各IDのデータを入力して下さい\n");
  for(int i = 0; i < input; i++){
    printf("%s\n",id_num[i]);
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

  average_calc(data,mean,input);

  putchar('\n');
  printf("入力された値を表示します\n");
  for(int i = 0; i < input; i++){
    printf("[%s] (a) %3d (b) %3d\n",id_num[i],data[i][0],data[i][1]);
  }
  putchar('\n');
  printf("各データ組の平均値は以下の通りです\n");
  for(int i = 0; i < input; i++){
    printf("[%s] %.1f\n",id_num[i],mean[i]);
  }
  putchar('\n');
  max_address = max_calc(mean,input);
  printf("平均値の最大値は%sの%.1fです\n",id_num[max_address],mean[max_address]);

  return 0;
}


void average_calc(int data[N][2], double mean[N], int no){
  int sum;
  for(int i = 0; i < no; i++){
    sum = 0;
    for(int j = 0 ; j < 2; j++){
      sum += data[i][j];
      mean[i] = (double)sum / 2;
    }
  }
}


int max_calc(double mean[N], int no){
  int max_address;
  double max = mean[0];
  for(int i = 1; i < no; i++){
    if(max < mean[i]){
      max = mean[i];
      max_address = i;
    }
  }
  return max_address;
}
