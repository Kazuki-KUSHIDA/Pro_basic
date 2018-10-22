//4-5.c 関数の基礎
//2018/10/22 17:25
//u306065 K.Kazuki

#include<stdio.h>
#include<math.h>

double distance( int x1 , int y1 , int x2 , int y2 );

int main(void){
  double x[2] ;
  double y[2] ;
  int i;
  
  for( i = 0 ; i < 2 ; i++ ){
    printf("＜点%d＞\n", i + 1 );
    
    printf("x座標：");
    scanf("%lf",&x[i]);

    printf("y座標：");
    scanf("%lf",&y[i]);
  }

  printf("＜2点間の距離＞\n");
  printf("距離：%f\n", distance( x[0] , y[0] , x[1] , y[1] ) );

  return 0;
}

double distance( int x1 , int y1 , int x2 , int y2 ){
  return sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) );
}
