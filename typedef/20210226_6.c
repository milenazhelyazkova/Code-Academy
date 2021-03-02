/*
Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.

*/
#include <stdio.h>

typedef struct key{
        int num;
        char a[32];
    }key_t;

int main(){
    key_t my = {3, "milena"};
    printf("%d,%s",my.num, my.a);

}