/* Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr); */
#include <stdio.h>

int main(){
    char arrChar[10];
    int arrInt[10] = {0};
    double arrDouble[10] = {0.0};
    printf("Size of arrChar is: %d\n", sizeof(arrChar));
    printf("Size of arrInt is:%d\n", sizeof(arrInt));
    printf("Size of arrDouble is:%d\n", sizeof(arrDouble));
    return 0;
}