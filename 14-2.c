//応用
//2019/01/10 9:20
//u306065

#include <stdio.h>
void mark_board(int board[3][3], int turn);/* プロトタイプ宣言 */
void print_board(int board[3][3]);

int main(void) {
  int board[3][3] = {};/* 0で初期化 */
  int turn = 1;
  
  mark_board(board,turn);
  print_board(board);

  return 0;
}

void mark_board(int board[3][3],int turn){
  int row,columm;//row:行 , columm:列
  
  while(1){
    if(turn == 1){
      putchar('o');
    }else{
      putchar('x');
    }
    printf("のターンです\n");
    
    printf("縦位置は？");
    scanf("%d",&row);
    
    printf("横位置は？");
    scanf("%d",&columm);

    if(board[row][columm] == 0){ //既に石が設定されてないか確認する
      board[row][columm] = turn;
      break;
    }
    printf("その座標に新規に設定することはできません。\n");
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
