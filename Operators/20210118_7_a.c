
#include <stdio.h>

int main()
{
    int nA = 0;
    printf("Insert value for nA\n");
    scanf("%d", &nA);
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);
    
    return 0;
}
