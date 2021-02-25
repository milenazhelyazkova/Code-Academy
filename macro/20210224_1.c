/*
1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.
*/
#include <stdio.h>
#define PI 3.14
#define E 100

int main(){
    double area, r;
    r = E;
    area = r*r*PI;
    printf("r = %.2f, area = %.2f",r, area);
    return 0;
}