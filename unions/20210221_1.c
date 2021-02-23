/*
Задача 1. Дефиниране и инициализация на обединение
*/
#include <stdio.h>
#pragma pack(1)
union Data{
    int i;
    float f;
    char text[23];
};
int main(){
    union Data data1 = {13};
    printf("Memory size : sizeof(data1) = %d\n", sizeof(data1));
    printf("i: %d, f: %f, text: %s\n", data1.i, data1.f, data1.text);
    return 0;
}