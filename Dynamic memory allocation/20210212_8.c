/*
Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = NULL;
    int n,i;
    printf("\nEnter number of integers you want to store: ");
    scanf("%u", &n);
    p = (int*) alloca(n * sizeof(int)); /*p is pointing to the adres of the beggining of the block reserved */
    if(p == NULL) {
        printf("Memory not available!\n");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter p[%d] element: ", i);
        scanf("%d", p+i); /* this are the adreses from the beggining ot the block, to n-1 (elements from 0 to n-1)*/
    }
    printf("Here is your array p= ");
    for(i=0;i<n;i++){
        printf("%d, ", *(p+i));
    }    
    return 0;
}
        
