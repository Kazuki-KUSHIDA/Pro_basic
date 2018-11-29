//多次元配列
//2018/11/28 21:58
//u306065 K.Kazuki
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

void read_score(int score[SIZE][3], int n);
void show_score(int score[SIZE][3], int subject, int n);

int main(void){
    int score[SIZE][3], subject, n;

    printf("学生数を入力して下さい（1～10）\n");
    printf("学生数:");
    scanf("%d", &n);
    
    read_score(score, n);
    
    while(1){
        printf("得点表を表示する科目を選択して下さい\n");
        printf("英語=>1,数学=>2,国語=>3,終了=>0:");
        scanf("%d", &subject);
        putchar('\n');
        show_score(score, subject, n);
    }

    return 0;
}

void read_score(int score[SIZE][3], int n){
    
    //人数分の入力を行う
    for (int i = 0; i < n; i++ ){
        printf("%d番目の学生\n", i + 1);
        
        //科目毎の入力を行う
        for (int j = 0; j < 3; j++ ){
            while(1){
                switch(j){
                    case 0:
                        printf("(1)英語:");
                        break;
                    case 1:
                        printf("(2)数学:");
                        break;
                    case 2:
                        printf("(3)国語:");
                        break;
                }
                scanf("%d", &score[i][j]);
                
                if( score[i][j] >= 0 && score[i][j] <= 100 ){
                    break;
                }
            }
        }
    }
    putchar('\n');
}

void show_score(int score[SIZE][3], int subject, int n){
    putchar('\n');
    switch(subject){
        case 0:
            printf("終了します\n");
            exit(0);
            break;
        case 1:
            printf("[英語]\n");
            break;
        case 2:
            printf("[数学]\n");
            break;
        case 3:
            printf("[国語]\n");
            break;
    }
    printf("番号  得点\n");
    for (int i = 0; i < n; i++){
        printf("%d     %d\n", i + 1, score[i][subject - 1]);
    }
}