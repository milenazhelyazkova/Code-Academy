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
    for(y=0;y<15;y++){
        for(x=0;x<15;x++){ 
            if((x>=a.x && y>=a.y) && (x<=b.x && y<=b.y))  
                board[y][x] = '@';
            else
                board[y][x] = '-';
            printf("%c ", board[y][x]);
        }
        printf("\n");    
    }
    return 0;
}
