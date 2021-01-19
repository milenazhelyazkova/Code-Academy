
#include <stdio.h>

int main()
{
    float fX = 3.5;
    float fY = 1.2;
    float fResult = 0;
    fResult = fY * fX;
    printf("%.2f * %.2f = %.2f\n", fY, fX, fResult); // 1.20 * 3.50 = 4.20
    fResult = fY + fX;
    printf("%.2f + %.2f = %.2f\n", fY, fX, fResult); // 1.20 + 3.50 = 4.70
    return 0;
}
