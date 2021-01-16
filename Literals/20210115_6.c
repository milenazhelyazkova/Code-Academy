#include <stdio.h>

int main(void)
{
    float a = 0xAA;
    signed int b = 0xAA;
    unsigned int c = 0xAAu;
    printf("f = %f, i = %d, a = %u", a, b, c);
    return 0;
}