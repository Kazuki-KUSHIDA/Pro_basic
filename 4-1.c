//4-1.c_関数の使い方
//2018/10/22_16:21
//u306065_K.Kazuki
#include<stdio.h>
#include<math.h>
double rectangle(double base,double height);
double dataInput(char *);
int main(void){
  double base , height ;

  base=dataInput("底辺：");
  height=dataInput("高さ：");
  printf("面積：%.2f\n", rectangle( base , height ) );

  return 0;
}

double rectangle( double base , double height ){
  double rect ;
  
  rect = base * height;
  
  return rect;
}
double dataInput(char *p){
  double num;
  printf("%s",p);
  scanf("%lf",&num);
  if(num<=0){
    printf("0より大きい値を入力してください\n");
    num=dataInput(p);
  }
  return num;
}