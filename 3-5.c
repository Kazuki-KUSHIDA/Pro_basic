//2018/10/11 10:35
//u306065 K.Kazuki
#include<stdio.h>
int main(void){
  //max,minの指定の仕方を考える(2-4.c参照)
  int max=0,min=65535,i,max_num,min_num,num,input;
  float sum=0;
  
  printf("Input the number of students: ");
  scanf("%d",&num);

  for(i=1;i<=num;i++){
    printf("No.%d: ",i);
    scanf("%d",&input);
    
    if(max<input){
      max=input;
      max_num=i;
    }
    if(min>input){
      min=input;
      min_num=i;
    }
    sum+=input;
  }
  printf("Average: %.1f\n",sum/num);
  printf("Max: No.%d, %d\n",max_num,max);
  printf("Min: No.%d, %d\n",min_num,min);
  return 0;
}
