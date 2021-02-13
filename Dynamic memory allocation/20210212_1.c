/*
Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = NULL;
    unsigned int n,i;
    int sum=0;
    printf("\nEnter number of integers you want to store: ");
    scanf("%u", &n);
    p = (int*) malloc(n * sizeof(int)); /*p is pointing to the adres of the beggining of the block reserved */
    if(p == NULL) {
        printf("Memory not available!\n");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter p[%u] element: ", i);
        scanf("%d", p+i); /* this are the adreses from the beginning ot the block, to n-1 (elements from 0 to n-1)*/
    }
    printf("Here is your array p= ");
    for(i=0;i<n;i++){
        printf("%d, ", *(p+i));
    }    
    for(i=0;i<n;i++){
        sum += *(p+i);
    }
    printf("\nThe sum of all the elements is: %d", sum);
    free(p);
    return 0;
}
        
