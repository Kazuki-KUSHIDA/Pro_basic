//配列と関数
//u306065
//2018/11/15/11:40
#include<stdio.h>
#define SIZE 3

void read_vector3D(double vector[]);
void outer_product3D(double vector1[],double vector2[],double vector3[]);
double inner_product3D(double vector1[],double vector2[]);

int main(void){
  double vector1[SIZE],vector2[SIZE],vector3[SIZE];
  
  printf("ベクトル1の3成分を入力してください\n");
  read_vector3D(vector1);
  printf("ベクトル2の3成分を入力してください\n");
  read_vector3D(vector2);
  
  outer_product3D(vector1,vector2,vector3);

  printf("入力ベクトル1とベクトル3の内積は%.2fです\n",inner_product3D(vector1,vector3));
  printf("入力ベクトル2ベクトル3の内積は%.2fです\n",inner_product3D(vector2,vector3));
  
  
  for( int i = 0 ; i < 3 ; i++ ){
    scanf("%d",&vector2[i]);
  }

