#include <stdio.h>
int main()
{
    int nX = 0; /* homework, input with scanf */
    int nY = 0;
    printf("Insert number nX =");
    scanf("%d", &nX);
    printf("Insert number nY =");
    scanf("%d", &nY);
    if (nX == nY)
    {
        printf("\n%d and %d are equal\n", nX, nY);
    }
    else
    {
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY)
    {
        printf("%d is greater than %d\n", nX, nY);
    }
    else
    {
        printf("%d is less than %d\n", nX, nY);
    }

    if (nX >= nY)
    {
        printf("%d is greater or equal to %d\n", nX, nY);
    }
    else
    {
        printf("%d is less or equal to %d\n", nX, nY);
    }
    if (nY <= nX)
    {
        printf("%d is less or equal to %d\n", nY, nX);
    }
    else
    {
        printf("%d is greater or equal to %d\n", nY, nX);
    }
    if (nY != nX) //nY != nX ? printf("%d is not equal %d\n", nY, nX) : printf("%d is equal %d\n",nX,nY);
    {
        printf("%d and %d are not equal\n", nY, nX);
    }
    else
    {
        printf("%d and %d are equal\n", nY, nX);
    }
}