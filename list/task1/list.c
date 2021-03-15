
#include "list.h"


void init()
{
    start = NULL;
}

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

int dellFirst(int *n)
{
    node_t *p = start;
    if (start)
    {
        *n = start->data;
        start = start->next;
        free(p);
        return 0;
    }
    else
        return 1;
    //Spisaka e prazen
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

int dellList(){
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