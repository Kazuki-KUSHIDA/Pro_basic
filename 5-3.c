#include<stdio.h>
int gcd(int a,int b);
int lcm(int a,int b);
int main(void){
  int input[2];

  while(1){
    printf("a:");
    scanf("%d",&input[0]);
    
    if(input[0] <= 0){
      continue;
    }

    input_b:
    printf("b:");
    scanf("%d",&input[1]);
    if(input[1] <= 0){
      goto input_b;//goto使わない
    }
    break;
  }

  printf("aとbの最大公約数：%d\n",gcd(input[0],input[1]));
  printf("aとbの最小公倍数：%d\n",lcm(input[0],input[1]));

  return 0;
}

int gcd( a, b ){
  int work;
  
  while(1){
    work = a % b;
    if( work == 0 ){
      break;
    }
    a = b;
    b = work;
  }
  
  return b;
}

int lcm( a , b ){
  int lcm;
  
  lcm = ( a * b ) / gcd( a , b );
  
  return lcm;
}
