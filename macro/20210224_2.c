/*
2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t.
*/
#include <stdio.h>
#define swap(t,x,y) {t tmp; tmp = x; x = y; y = tmp;}
 
int main(){
    int a = 10, b = 20;
    printf("before swap: %d, %d\n", a, b);
    swap(int, a, b)
    printf("after swap: %d, %d\n", a, b);

    double x = 2.3, y = 4.5;
    printf("before swap: %.2f, %.2f\n", x, y);
    swap(double, x, y)
    printf("after swap: %.2f, %.2f\n", x, y);

    return 0;
}