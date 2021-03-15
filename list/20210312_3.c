/*
Задача 3.
Направете едносвързан списък, съдържащ числата 1-14 и 
принтирайте петия елемент от края му
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t
{
    int data;
    node_t *next;
}node_t;

node_t *start;

int add(int data)
{
    node_t *p = start;
    start = (node_t *)malloc(sizeof(node_t));
    if (!start)
        return -1;
    start->data = data;
    start->next = p;
    return 0;
}

void printList()
{
    node_t *p = start;
    while (p != NULL)
    {
        printf("%d, ", p->data);
        p = p->next;
    }
}
int deliteList(){
    node_t *temp = start;
    while (temp != NULL)
    {
        temp = temp->next;
        free(start);
        start = temp;
    }
    if(start == NULL){
        printf("\nList is deleted.");
        return 0;
    }
    else 
        return -1;
}

int main(void)
{
    start = NULL;
    for(int i=1; i<=14; i++){
        add(i);
    }
    printList();
    int size=0;
    node_t *p = start;
    while(p !=NULL){
        p = p->next;
        size++;
    }
    int position = size - 4;
    printf("\nNumber of elements in list are: %d", size);
    printf("\nPosition 5 elements from the end is: size - 4 = %d", position);
    p = start;
    size = 1;
    while(size != position){
        p = p->next;
        size++;
    }
    printf("\nThe 10th element of the list is: %d", p->data);
    deliteList();
    
    return 0;
}