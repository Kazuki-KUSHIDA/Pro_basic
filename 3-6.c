//2018/10/11 11:04
//u306065 K.Kazuki

#include<stdio.h>
int main(void){
  int hight,width,i,j;
  while(1){
    printf("H: ");
    scanf("%d",&hight);
    printf("W: ");
    scanf("%d",&width);

    if(hight==0&&width==0){
      break;
    }

    //どうしての時以外は0から始めることをおすすめする
    for(i=1;i<=hight;i++){
      for(j=1;j<=width;j++){
        if(i==1||i==hight||j==1||j==width){
          printf("#");
        }else{
          printf(".");
        }
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
