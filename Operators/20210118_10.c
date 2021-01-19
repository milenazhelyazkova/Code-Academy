#include <stdio.h>
int main()
{
    int nResult = 12; 
    int nX = 7;
    printf("Result = %d\n", nResult); // Result = 12
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult); //Result += 7 -> 19
    nResult = 1;
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult); // Result <<= 7 -> 128

    nResult = 10;
    nX = 5;
    nResult *= nX;
    printf("Result *= %d -> %d\n", nX, nResult); // Result *= 5 -> 50

    nResult /= nX;
    printf("Rsult /= %d --> %d\n", nX, nResult); // Rsult /= 5 --> 10

    nResult &= nX;
    printf("Rsult &= %d --> %d\n", nX, nResult); // Rsult &= 5 --> 0 , 1010 &= 0101 --> 0000

    nResult = 10;
    nResult ^= nX;
    printf("Rsult ^= %d --> %d\n", nX, nResult); // Rsult ^= 5 --> 15 , 1010 ^= 0101 --> 1111
}