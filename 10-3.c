//文字列
//2018/11/29 10:19
//u306065
#include <stdio.h>
#define SIZE 50

int main(void){
  char first_name[SIZE],family_name[SIZE];
  int n , i;

  printf("名の字数を入力して下さい:");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("first_name[%d]=",i);
    scanf("%*c%c",&first_name[i]);
  }
  first_name[i]='\0';

  printf("姓の字数を入力して下さい:");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("family_name[%d]=",i);
    scanf("%*c%c",&family_name[i]); 
  }
  family_name[i]='\0'; 

  putchar('\n');
  printf("選手の氏名は\n");
  printf("姓:%s\n", family_name);
  printf("名:%s\n", first_name);

  return 0;
}
