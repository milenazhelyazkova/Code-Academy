#include <stdio.h>
int main()
{
    char c;
    int digits, total = 0;
    digits = 0; // Брой на цифрите
    while ((c = getchar()) != EOF) // != е с по-голям преоритет от =, затова (c = getchar()), end of file = Crtl+Z
    {
        total++; // брои и натискането на enter като символ
        if (c < '0' || c > '9')
            continue;
        digits++;
    }
    printf("simvols total is %d \n", total);
    printf("Number of digits = %d\n", digits);
    return 0;
}