//配列と関数
//u306065
//2018/11/15 10:23
#include<stdio.h>
#define SIZE 20

void get_score(int array[],int n);
void error_message(int point);
void show_array(int array[],int n);
int max_array(int array[],int n);
int min_array(int array[],int n);
double average_array(int array[],int n);

int main(void){
  int array[SIZE],n;
  
  printf("データ数を入力してください（1～20）:");
  scanf("%d",&n);
  get_score(array,n);
  show_array(array,n);
  printf("最大値は%dです\n",max_array(array,n));
  printf("最小値は%dです\n",min_array(array,n));
  printf("平均値は%.1fです\n",average_array(array,n));
  return 0;
}

void get_score(int array[],int n){
  int i = 0;

  while( i < n ){
    printf("No.%d:",i+1);
    scanf("%d",&array[i]);
    if( array[i] < 0 || array[i] > 100 ){
      error_message(array[i]);
      continue;
    }
    i++;
  }
}

void error_message(int point){
  if( point < 0 ){
    printf("****入力ミス:%dは0未満です****\n",point);
  }else if( point > 100 ){
    printf("****入力ミス:%dは100をこえています****\n",point);
  }
}

void show_array(int array[],int n){
  int i;
  printf("\nデータを表示します\n");
  for( i = 0 ; i < n ; i++ ){
    printf("No.%d:%d\n",i+1,array[i]);
  }
}

int max_array(int array[],int n){
  int i,max = array[0];
  for( i = 0 ; i < n ; i++ ){
    if( max < array[i] ){
      max = array[i];
    }
  }
  return max;
}

int min_array(int array[],int n){
  int i,min = array[0];
  for( i = 0 ; i < n ; i++ ){
    if( min > array[i] ){
      min = array[i];
    }
  }
  return min;
}

double average_array(int array[],int n){
  int sum = 0 ,i;
  double ave;
  for( i = 0 ; i < n ; i++ ){
    sum += array[i];
  }
  ave = (double)sum/(double)n;
  return ave;
}
