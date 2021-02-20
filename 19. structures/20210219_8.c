/*
Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.
 
*/
#include <stdio.h>

struct point{
    int x;
    int y;
};
struct rect{
    struct point a;
    struct point b;
};
struct point makepoint(int x, int y){
    struct point my_point;
    my_point.x = x;
    my_point.y = y;
    return my_point;
}
int main(){
    struct rect screen;
    char board[15][15];
    screen.a = makepoint(0,0);
    screen.b = makepoint(15,15);
    for(int x=screen.a.x; x<screen.b.x;x++){
        for(int y=screen.a.y; y<screen.b.y;y++){
            board[x][y] = '-';
            printf("%c", board[x][y]);
        }   
        printf("\n");
    }
    return 0;
}

