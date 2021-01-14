#include<stdio.h>
int main()
{
    char a='a';
    int b=102;
    long c=50000;
    double d=6;
    float e=-48.907;
    printf("a is at address %p, occupies %d bits, value: %c\n", &a, sizeof(a), a);
    printf("b is at address %p, occupies %d bits, value: %d\n", &b, sizeof(b), b);
    printf("c is at address %p, occupies %d bits, value: %ld\n", &c, sizeof(c), c);
    printf("d is at address %p, occupies %d bits, value: %.0lf\n", &d, sizeof(d), d);
    printf("e is at address %p, occupies %d bits, value: %.3f\n", &e, sizeof(e), e);

    return 0;

}
