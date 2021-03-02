/*
Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *ptr;
}t_node;

int main(){
    typedef t_node* t_ptr;
    t_ptr one= (t_ptr)malloc(sizeof(t_node));
    printf("size of one %d", sizeof(one));
    free(one);
    return 0;
}