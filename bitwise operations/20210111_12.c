#include <stdio.h>

int main()
{
    unsigned int a;
    a =245;

    a= a&=0xDB;//Ex.8bit 
    printf("%d", a);
}