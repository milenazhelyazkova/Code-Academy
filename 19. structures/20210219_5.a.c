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
    printf("Your origin Board:\n");
    printf("0 1 2 3 4 5 6 7 8 9101112131415-->x\n");
    for(y=0;y<=15;y++){
        for(x=0;x<=15;x++){
            board[y][x] = '-';
            printf("%c ", board[y][x]);
        }
        printf("\n"); 
    }
    printf("|\n");
    printf("v y");
    return 0;
}
