/*
Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @
*/
#include <stdio.h>

struct point{
    int x;
    int y;
};
int main(){
    struct point a = {3, 4};
    struct point b = {7, 10};
    char board[15][15];
    int x,y;
    printf("0-------------------------->x\n");
    for(y=0;y<15;y++){ /* y are rows form 0 to 14 => point a with y=4 must be y=3  and point b with y=10 must be y=9 */
        for(x=0;x<15;x++){ /* x are colums from 0 to 14 => point a with x=3 must be x=2 and  point b with x=7 must be x=6*/
            if((x==2 && y==3) || (x==6 && y==9))  
                board[y][x] = '@';
            else
                board[y][x] = '-';
            printf("%c ", board[y][x]);  
        }
        printf("\n");    
    }
    return 0;
}
