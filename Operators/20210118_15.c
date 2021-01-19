
#include <stdio.h>
int main()
{
    int nA = 1;
    int nB = (nA == 1 ? 2 : 0); /* сравнява число */
    printf("A value is %d\n", nA);
    printf("B value is %d\n",
           nB);

    printf("Insert value for nA\n");
    scanf("%d", &nA);
    nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

  
    printf("Insert value for nA\n");
    scanf("%d", &nA);
    printf("Insert value for nB\n");
    scanf("%d", &nB);
    int bigerValue = (nA > nB ? nA : nB);
    printf("The bigger value between nA = %d and nB = %d is: %d\n", nA, nB, bigerValue);
}
/*а) въведете стойност за nA с scanf
b) използвайте условния оператор за намиране на максималното от две
числа*/
