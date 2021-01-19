
#include <stdio.h>
int main()
{
    int nA = 0; /* използвайте scanf */
    int nB = 0;
    int nX = 0;
    int nY = 0;
    scanf("%d", &nA);
    scanf("%d", &nB);
    scanf("%d", &nX);
    scanf("%d", &nY);
    printf("nA = %d\nnB = %d\nnX = %d\nnY = %d\n", nA, nB, nX, nY);
    if (nA << nB && nY > 0) // 1во е <<, 2ро >, 3то &&
    { 
        printf("&& Operator : Both conditions are true\n");
    }
    if ((nX + nY)% 5 || nY <= 20) // (nX + NY), % , <=, ||
    {
        printf("|| Operator : At least one condition is true\n"); // също 1 || 1 --> 1, само 0 || 0 --> 0
    }
    if (!(nA ^ nB && nB == 0)) // понеже има скоби ( == , ^ , && ) , ! 
    {
        printf(" ! Operator : At least 1 conditin is false\n"); // ! (0) --> 1, т.е. if връща 1ца ако едно от двете или 2те условия са false
    }
    else
    {
        printf("Both conditions are true.\n");
    }
}