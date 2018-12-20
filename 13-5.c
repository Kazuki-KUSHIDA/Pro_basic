//応用
//u306065
//2018/12/20 10:05
#include<stdio.h>
#define N 10
#define M 10

typedef struct {
  int data[2];
  char id_num[M];
} DATA;

void average_calc(DATA input[N], double mean[N], int no);
int max_calc(double mean[N], int no);

int main(void){
  DATA input[N];
  double mean[N];
  int no,max_address;

  while(1){
    printf("入力データ数を入力して下さい:");
    scanf("%d",&no);
    if(no <= 10&&no >= 0){
      break;
    }
    printf("データ数が10を超えているか負です\n");
  }
  
  for(int i = 0; i < no; i++){
    printf("データNo.%2dのID番号:",i+1);
    scanf("%*c%s",input[i].id_num);
  }

  printf("各IDのデータを入力して下さい\n");
  for(int i = 0; i < no; i++){
    printf("%s\n",input[i].id_num);
    for(int j = 0; j < 2; j++){
      while(1){
        printf("データNo.%3d-",i+1);
        if( j == 0 ){
          putchar('a');
        }else{
          putchar('b');
        }
        putchar(':');
      
        scanf("%d",&input[i].data[j]);
        if(input[i].data[j] <= 100 && input[i].data[j] >= 0){
          break;
        }
        printf("入力データが100を超えているか負です\n");
      }
    }
  }

  average_calc(input,mean,no);

  putchar('\n');
  printf("入力された値を表示します\n");
  for(int i = 0; i < no; i++){
    printf("[%s] (a) %3d (b) %3d\n",input[i].id_num,input[i].data[0],input[i].data[1]);
  }
  putchar('\n');
  printf("各データ組の平均値は以下の通りです\n");
  for(int i = 0; i < no; i++){
    printf("[%s] %.1f\n",input[i].id_num,mean[i]);
  }
  putchar('\n');
  max_address = max_calc(mean,no);
  printf("平均値の最大値は%sの%.1fです\n",input[max_address].id_num,mean[max_address]);

  return 0;
}


void average_calc(DATA input[N], double mean[N], int no){
  int sum;
  for(int i = 0; i < no; i++){
    sum = 0;
    for(int j = 0 ; j < 2; j++){
      sum += input[i].data[j];
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
