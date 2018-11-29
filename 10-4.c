//文字列
//2018/11/29 10:58
//u306065
#include <stdio.h>
#include <string.h>
#define SIZE 64

int get_length (char str[]);
int main(void){
  char str[SIZE];
  int len;

  printf("文字列:");
  scanf("%s",str);

  len = get_length(str);
  printf("文字列の長さ:%d\n",len);
  
  printf("文字列（逆順）:%s.",str);
  for(int i = len; i >= 0; i--){
    printf("%c",str[i]);
  }
  putchar('\n');
  return 0;
}

int get_length (char str[SIZE]){
  int len = strlen(str);
  return len;
}
