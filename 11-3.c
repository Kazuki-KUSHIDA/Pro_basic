//構造体
//18-12-10 16:46
//u306065
#include<stdio.h>
#define SIZE 5

typedef struct{
  int id;
  int math;
  int eng;
  int physics;
} STUDENT;

int main(void){
  int i , max , min , g_total = 0 , total;
  STUDENT data[SIZE];

  for(i = 0 ; i < SIZE ; i++ ){
    printf("%d人目の学生番号は?:", i + 1);
    scanf("%d", &data[i].id);
    printf("数学の点数は?:");
    scanf("%d", &data[i].math);
    printf("英語の点数は?:");
    scanf("%d", &data[i].eng);
    printf("物理の点数は?:");
    scanf("%d", &data[i].physics);
  }

  putchar('\n');
  printf("学生番号 数学 英語 物理 合計\n");
  for(i = 0 ; i < SIZE ; i++ ){
    total = data[i].math+data[i].eng+data[i].physics;
    
    printf("%8d %4d %4d %4d %4d\n",
      data[i].id,data[i].math,data[i].eng,data[i].physics,total);
    
    if(i == 0){
      max = total;
      min = total;
    }

    if(max<total){
      max = total;
    }else if(min>total){
      min = total;
    }

    g_total += total;
  }
  printf("最高点は%d点\n",max);
  printf("最低点は%d点\n",min);
  printf("平均点は%.2f点\n",(float)g_total/SIZE);

  return 0;
}

