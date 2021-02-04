/* Задача 1.2 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double */
#include <stdio.h>

int main(){
    char arrChar[4] = {'a', 'b', 'c', '\0'};
    int arrInt[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double arrDouble[10] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    printf("last element of arrChar is: %c\n", arrChar[2]);
    printf("last element of arrInt is:%d\n", arrInt[9]);
    printf("last element of arrDouble is:%f\n", arrDouble[9]);
    return 0;
}