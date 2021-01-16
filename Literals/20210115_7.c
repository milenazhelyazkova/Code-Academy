#include <stdio.h>

int main(void){
    double a = 0xBB;
    signed long long b = 0xBB;
    unsigned long long c = 0xBBu;
    printf("a = %lf, b = %lld, c = %lld", a, b, c);

    return 0;
}
