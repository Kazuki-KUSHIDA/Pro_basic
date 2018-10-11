//2018/09/27 10:20
//u306065 Kazuki_Kushida
//2-5.c
#include<stdio.h>
int main(void){
  float apple,orange,rate_apple=0,rate_orange=0,total_apple,total_orange;
  
  printf("りんごの個数：");
  scanf("%f",&apple);
  printf("みかんの個数：");
  scanf("%f",&orange);

  printf("＜りんご＞\n");
  printf("単価　：100円\n");
  printf("個数　：%.0f個\n",apple);
  printf("割引率：");

  //割引率の計算
  if(apple>=10){
    rate_apple=0.1;
    if(apple>=20){
      rate_apple=0.2;
    }
  }else if(apple<10 && orange<10){
    if(apple+orange>10){
      rate_apple=0.05;
      rate_orange=0.05;
    }
  }

  printf("%.0f%%\n",rate_apple*100);
  total_apple=(apple*100)-(apple*100*rate_apple);
  printf("りんごの合計金額：%.1f円\n",total_apple);


  printf("＜みかん＞\n");
  printf("単価　：50円\n");
  printf("個数　：%.0f個\n",orange);
  printf("割引率：");

  //割引率の計算
  if(orange>=10){
    rate_orange=0.2;
  }
  
  printf("%.0f%%\n",rate_orange*100);
  total_orange=(orange*50)-(orange*50*rate_orange);
  printf("みかんの合計金額：%.1f円\n",total_orange);



  printf("＜合計＞\n");
  printf("合計金額：%.1f円\n",total_apple+total_orange);

  return 0;
}
