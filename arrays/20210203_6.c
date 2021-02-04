/*
Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */
#include <stdio.h>

int my_swap(int *ptr1, int *prt2);

int main(){
    int x= 10, y=20;
    printf("original x = %d, y = %d", x, y);
    my_swap(&x,&y);
    printf("\nSwaped x = %d, y = %d", x, y);
    return 0;
}
int my_swap(int *p1, int *p2){
    *p1 = *p1 * *p2;
    *p2 = *p1 / *p2;
    *p1 = *p1 / * p2;
}