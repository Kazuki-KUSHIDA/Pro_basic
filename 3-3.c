//2018/10/11 10:08
//u306065 K.Kazuki
#include<stdio.h>
int main(void){
  int min,max,sum=0;
  printf("min: ");
  scanf("%d",&min);
  printf("max: ");
  scanf("%d",&max);
  while(min<=max){
    sum+=min;
    min++;
  }
  printf("sum: %d\n",sum);
  return 0;
}
