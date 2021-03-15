/*
Задача 1. Реализация на списък. Напишете програма, която добавя и 
изтрива елемент от списък по позиция в списъка. Използвайте следния 
елемент на динамичния списък:
*/
#include "list.h"

node_t *start;

int main(){
    init();
    add(10);
    add(20);
    printList();
    int x;
    dellFirst(&x);
    printf("\n");
    printList();
    dellList();
    return 0;
}