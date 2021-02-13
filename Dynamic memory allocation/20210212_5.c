/*
Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *piValue = NULL;
    unsigned uSize1 = 0;
    unsigned uSize2 = 0;
    printf("\nEnter size: ");
    scanf("%u", &uSize1);
    piValue = (int *)malloc(uSize1 * sizeof(int));
    if (NULL == piValue) /* the program is faster */
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Addresses of allocated memory: %p\n", piValue);
    printf("\nEnter the new size: ");
    scanf("%u", &uSize2);
    if(uSize2 < uSize1)
        printf("memory might be lost, you must enter value bigger than %u", uSize1);
    piValue = realloc(piValue, uSize2 * sizeof(int));
    if (NULL == piValue)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Addresses of reallocated memory: %p\n", piValue);
    free(piValue);
    return 0;
}