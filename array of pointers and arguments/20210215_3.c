/*
Задача 3.
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.
*/

#include <stdio.h>
int main(){
    int *p = (int*)5;
    printf("%d\n", p);
    double *f;
    *f = 5.5;
    printf("%f\n", *f);
    char *c = (char*)'m';
    printf("%c\n", c);
    return 0;
}
