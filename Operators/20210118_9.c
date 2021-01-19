#include <stdio.h>
int main()
{
    int iX = 13;
    int iY = 44;
    int iResult = 0;
    iResult = iX - iY;
    printf("%d - %d = %d \n", iX, iY, iResult); //13 - 44 = -31
    iResult = iY / iX;
    printf("%d / %d = %d \n", iY, iX, iResult); //44 / 13 = 3
    iResult = iY % iX;
    printf("%d / %d Remainder: %d\n", iY, iX, iResult); // 44 / 13 Remainder: 5
    
    return 0;
}
