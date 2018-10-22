//4-1.c_関数の使い方
//2018/10/22_16:21
//u306065_K.Kazuki
#include<stdio.h>
#include<math.h>
double rectangle(double base,double height);
int main(void){
  double base , height ;

  while(1){
    printf("底辺：");
    scanf("%lf",&base);
    if( base <= 0 ){
      printf("0より大きい値を入力してください\n");
      continue;
    }
    
    input_height: //高さの再入力
    printf("高さ：");
    scanf("%lf",&height);
    if( height <= 0 ){
      printf("0より大きい値を入力してください\n");
      goto input_height; //高さの再入力を行う
    }
    break; //底辺・高さの入力が正しければループを脱出する
  }

  printf("面積：%.2f\n", rectangle( base , height ) );

  return 0;
}

double rectangle( double base , double height ){
  double rect ;
  
  rect = base * height;
  
  return rect;
}
