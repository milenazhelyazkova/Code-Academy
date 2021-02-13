/*
Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата
*/
#include <stdio.h>
#include <stdlib.h>

int i;
int *input(int n);
int *reinput(int *p, int n);
int main()
{
    
    int *p = input(2);
    p = reinput(p,4);
    printf("\nHere is your array p= ");
    for(i=0;i<4;i++)
        printf("%d, ", *(p+i));
    free(p);
    return 0;
}       
int *input(int n){
    int *p = NULL;
    p = (int*) malloc(n * sizeof(int)); /*p is pointing to the adres of the beggining of the block reserved */
    if(p == NULL) {
        printf("Memory not available!\n");
        exit(1);
    }
    printf("\nEnter %d elements: \n", n);
    for(i=0;i<n;i++){
        printf("Enter p[%d] element: ", i);
        scanf("%d", p+i); /* this are the adreses from the beggining ot the block, to n-1 (elements from 0 to n-1)*/
    }
     return p;
}
int *reinput(int *p, int n){
    if(n<i){
        printf("The new block of memory must be larger then the old one\nPlease pick another value by witch you want to increase the memory block.\nThe value must be bigger than %d",i);
        exit(1);
    }
    p = (int*) realloc(p,n* sizeof(int)); /*p is pointing to the adres of the beggining of the block reserved */
    if(p == NULL) {
        printf("Memory not available!\n");
        exit(1);
    }
    printf("\nYou chose to add %d new element: \n", n-i);
    
    for(i;i<n;i++){ 
        printf("Enter p[%d] element: ", i);
        scanf("%d", p+i); /* this are the adreses from the end ot the old block, to m-1 (elements from n to m-1)*/
    }
    return p;
}