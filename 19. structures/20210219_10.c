/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
d) Попълнете триъгълник с @
*/
#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};
int main(void){
    char screen[15][15];
    int x, y;
    for (y = 0; y < 15; y++)
        for (x = 0; x <15; x++)
            screen[y][x] = '-';
    struct point a = {4, 4};
    int i=0;

    for(y = 0; y <=a.y; y++){
        for(x = a.x-1; x >=i; x--){
            screen[y][x] = '@'; 
            screen[y][x+5] = '@'; 
        }
        i++;
    }
    for (y = 0; y < 15; y++){
            printf("\n");
            for (x = 0; x <15; x++)
                printf("%3c", screen[y][x]);
    }
    printf("\n");
    return 0;
}
