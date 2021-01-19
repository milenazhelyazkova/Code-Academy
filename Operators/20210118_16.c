
#include <stdio.h>

int main(){
    int iA = 13;
    int *pValue = NULL; /* pointer to int */
    pValue = &iA;       /* assigning address of iA to the pointer*/
    printf("\nAddress of variable iA is: %p\n", pValue); // Address of variable iA is: 000000000061FE14
    printf("\nValue of variable iA is: %d\n", *pValue); // Value of variable iA is: 13

    return 0;
}