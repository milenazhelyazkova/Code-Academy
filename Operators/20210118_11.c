#include <stdio.h>
int main()
{
    int iCounter = 0;
    while (++iCounter < 3)
    {
        printf("Counter %d\n", iCounter); // 1во завъртане Counter = 1, 2ро завъртане Counter = 2
        printf("++ Counter: %d\n", ++iCounter);// 1во завъртане ++Counter = 2, 2ро завъртане ++Counter = 3
        printf("-- Counter: %d\n", --iCounter);// 1во завъртане --Counter = 1, 2ро завъртане --Counter = 2
        printf("Counter ++: %d\n", iCounter++);// 1во завъртане Counter++ = 1, 2ро завъртане Counter++ = 2
        printf("Counter --: %d\n", iCounter--);// 1во завъртане Counter-- = 2, 2ро завъртане Counter-- = 3
        printf("Counter %d\n", iCounter);// 1во завъртане Counter= 1, 2ро завъртане Counter= 2
    }
    return 0;
}
/* Какво става, ако се препълни броячът? ще излезе от цикъла и в случая програмата ще свърши*/
