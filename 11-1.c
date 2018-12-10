//構造体
//18-12-10 16:25
//u306065
#include <stdio.h>

struct student {
  int id;
  char name[100];
};

int main(void){
  struct student data = {296000,"Taro"};

  printf("学生番号:%d\n",data.id);
  printf("氏名:%s\n",data.name);
  return 0;
}
