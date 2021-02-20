/*
Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.
*/
#include <stdio.h>
#include <math.h>

struct point{
    int x;
    int y;
};

double distance(struct point a, struct point b, int x, int y){
    double distance = sqrt((double)a.x*a.x + (double)b.x*b.x);
    return distance;
}
int main(){
    int coordX = 4;
    int coordY = 5;
    struct point a;
    struct point b;
    double dist = distance(a,b,coordX,coordY);
    printf("%f", dist);
    return 0;
}