/*
Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата  и потребителят бива питан да избира размерите
*/
#include <stdio.h>
#include <stdlib.h>

int n;
int m;
int *input();
int *reinput(int *p);
int main()
{
    int i;
    int *p = input();
    p = reinput(p);
    printf("\nHere is your array p= ");
    for(i=0;i<(m+n);i++)
        printf("%d, ", *(p+i));
    free(p);
    return 0;
}       
int *input(){
    int *p = NULL;
    int i;
    printf("\nEnter number of integers you want to store: ");
    scanf("%d", &n);
    printf("\nThe block of memmory alocated will be %d bites.", n*sizeof(int));
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
int *reinput(int *p){
    int i;
    printf("\n\nEnter how more integers you want to store: ");
    scanf("%d", &m);
    if(m<n){
        printf("The new block of memory must be larger then the old one\nPlease pick another value by witch you want to increase the memory block.\nThe value must be bigger than %d",n);
        exit(1);
    }
    p = (int*) realloc(p,(n+m) * sizeof(int)); /*p is pointing to the adres of the beggining of the block reserved */
    if(p == NULL) {
        printf("Memory not available!\n");
        exit(1);
    }
    printf("\nYou choce to increase the allocated memory by %d bites",(m)*sizeof(int));
    printf("\nThe new block of memmory will be %d bites.", (m+n)*sizeof(int));
    printf("Enter %d new element: \n", m);
    
    for(i=n;i<(n+m);i++){ 
        printf("Enter p[%d] element: ", i);
        scanf("%d", p+i); /* this are the adreses from the end ot the old block, to m-1 (elements from n to m-1)*/
    }
    return p;
}