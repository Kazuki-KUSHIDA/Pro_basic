//応用
//2019/01/10 9:44
//u306065

#include <stdio.h>
void mark_board(int board[3][3], int turn);/* プロトタイプ宣言 */
void print_board(int board[3][3]);

int main(void) {
  int board[3][3] = {};/* 0で初期化 */
  int turn = 1;
  
  for(int i=0;i<9;i++){ //最大9回処理を実行するため
    mark_board(board,turn);
    print_board(board);
    
    if(turn == 1){
      turn = -1;
    }else{
      turn = 1;
    }
   

  }

  return 0;
}

void mark_board(int board[3][3],int turn){
  int row,columm;//row:行 , columm:列
  int flug = 0; //値が範囲内か否かの結果を入れる

  if(turn == 1){
    putchar('o');
  }else{
    putchar('x');
  }
  printf("のターンです\n");
  
  while(1){
    printf("縦位置は？");
    scanf("%d",&row);
    
    printf("横位置は？");
    scanf("%d",&columm);
    
    if(row>=0 && row<3 && columm>=0 && columm<3){
      flug = 1;
    }

    if(board[row][columm] == 0 && flug == 1){ //既に石が設定されてないか確認する
      board[row][columm] = turn;
      break;
    }
    printf("そこには置けません\n");
  }
}

void print_board(int board[3][3]){
  for(int i=0;i<3;i++){
    putchar('|');
    for(int j=0;j<3;j++){
      switch(board[i][j]){
        case -1:
          putchar('x');
          break;

        case 0:
          putchar(' ');
          break;

        case 1:
          putchar('o');
          break;
      }
      putchar('|');
    }
    putchar('\n');
  }
}
