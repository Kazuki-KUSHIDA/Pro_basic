//配列
//2018/11/08 10:19
//u306065
#include <stdio.h>
#define SIZE 10

int array[SIZE];

void get_array(void);
void search_data(void);

int main(void){
  get_array();
  search_data();
  return 0;
}

void get_array(void){
  int i;
  for( i = 0 ; i < SIZE ; i++ ){
    printf("データ[No.%2d]を入力してください: ",i + 1);
    scanf("%d",&array[i]);
  }
  putchar('\n');
}

void search_data(void){
  int search , i , j = 0 , k = 0 , l = 0;
  int small[SIZE] , equal[SIZE] , big[SIZE];

  printf("検索用データを入力してください: ");
  scanf("%d",&search);
  putchar('\n');

  for( i = 0 ; i < SIZE ; i++ ){
    if( array[i] < search ){
      small[j] = array[i];
      j++;
    }else if(array[i] == search ){
      equal[k] = array[i];
      k++;
    }else if(array[i] > search ){
      big[l] = array[i];
      l++;
    }
  }

  printf("検索結果\n");
  
  printf("検索データ: %d\n",search);
  printf("検索データより小さいデータ: ");
  for( i = 0 ; i < j ; i++ ){
    if( i != 0 ){
      putchar(',');
    }
    printf("%d",small[i]);
  }
  putchar('\n');

  printf("検索データと等しいデータ: ");
  for( i = 0 ; i < k ; i++ ){
    if( i != 0 ){
      putchar(',');
    }
    printf("%d",equal[i]);
  }
  putchar('\n');

  printf("検索データより大きいデータ: ");
  for( i = 0 ; i < l ; i++ ){
    if( i !=  0 ){
      putchar(',');
    }
    printf("%d",big[i]);
  }
  putchar('\n');
}

