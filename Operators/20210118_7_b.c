
#include <stdio.h>

int main()
{
    int nA=0;
    int nB=0;
    printf("Insert value for nA\n");
    scanf("%d", &nA);
    printf("Insert value for nB\n");
    scanf("%d", &nB);
    int bigerValue = (nA > nB ? nA : nB);
    printf("The bigger value between nA = %d and nB = %d is: %d\n", nA, nB, bigerValue);

    return 0;
}
