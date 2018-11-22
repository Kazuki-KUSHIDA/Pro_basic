#include<stdio.h>
#define SIZE 3
void read_vector3D( double vector[] );
void outer_product3D( double vector1[], double vector2[], double vector3[] );
double inner_product3D( double vector1[], double vector2[] );
int main(void){
  double inner;
  double vector1[SIZE];
  double vector2[SIZE];
  double vector3[SIZE];
      
  printf("ベクトル1の3成分を入力してください\n");
  read_vector3D(vector1);
               
  printf("ベクトル2の3成分を入力してください\n");
  read_vector3D(vector2);
  printf("\n");
                     
  outer_product3D(vector1,vector2,vector3);
                        
  inner=inner_product3D(vector1,vector3);
  printf("入力ベクトル1とベクトル3の内積は%.2fです\n",inner);
  inner=inner_product3D(vector2,vector3);
  printf("入力ベクトル2とベクトル3の内積は%.2fです\n",inner);
                                 
  return 0;
}
                                     
void read_vector3D(double vector[]){
  int i;  
  for(i=0;i<3;i++){
    scanf("%lf",&vector[i]);
  }
}
                                                  
void outer_product3D( double vector1[], double vector2[], double vector3[] ){
                                                        
vector3[0]=((vector1[1]*vector2[2])-(vector1[2]*vector2[1]));
vector3[1]=((vector1[2]*vector2[0])-(vector1[0]*vector2[2]));
vector3[2]=((vector1[0]*vector2[1])-(vector1[1]*vector2[0]));
                                                              
printf("2つのベクトルに垂直なベクトル3（外積）は(%.2f,%.2f,%.2f)です\n\n",vector3[0],vector3[1],vector3[2]);  
                                                                 
}
                                                                   
double inner_product3D( double vector1[], double vector2[] ){
  int ans;
                                                                 
  ans=((vector1[0]*vector2[0])+(vector1[1]*vector2[1])+(vector1[2]*vector2[2]));
  return ans;
} 
                                                                    
