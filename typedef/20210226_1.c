/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.
*/
#include <stdio.h>

typedef struct time{
    int hour;
    int min;
    int sec;
}t_time;

int main(){
    t_time current = {10,21,35};
    printf("%d.%d.%d",current.hour, current.min, current.sec);
}