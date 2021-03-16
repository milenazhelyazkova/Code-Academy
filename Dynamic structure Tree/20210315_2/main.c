/*
Задача 2
● Напишете функцията за добавяне на елемент в дървото рекурсивно 
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T) 
*/


#include "tree.h"

treeNode_t *tree = NULL;

int main()
{
    insertKey(40, &tree);
    insertKey(10, &tree);
    insertKey(55, &tree);
    insertKey(5, &tree);
    insertKey(70, &tree);
    insertKey(3, &tree);

    printf("Right part:");
    printRight(tree);
    printf("\nLeft part:");
    printLeft(tree);
    printf("\n");

    deltree(tree);
    return 0;
}