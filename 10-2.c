//文字列
//2018/11/29 10:19
//u306065
#include <stdio.h>
#define SIZE 50

int main(void){
  char first_name[SIZE] = "Daisuke",family_name[SIZE];
  
  printf("姓を入力して下さい:");
  scanf("%s", family_name);

  printf("< 2つの文字列を表示します >\n");
  printf("姓:%s\n", family_name);
  printf("名:");
  //sizeofを使いたかった
  for(int i = 0; i < sizeof(first_name); i++){
    switch(first_name[i]){
      case '\0':
        putchar('\n');
        break;
      default:
        printf("%c",first_name[i]);
        break;
    }
  }
  return 0;
}
