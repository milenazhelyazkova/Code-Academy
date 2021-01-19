#include <stdio.h>

long long int xorshift();

int main()
{
    xorshift();
    xorshift();
    xorshift();
}
long long int xorshift()
{
    
    static long long int rand = 1; 
    printf("\n%lld\n", rand);
    rand = rand ^= rand << 13;
    rand = rand ^ rand >> 17;
    rand = rand ^ rand << 5;
    printf("%lld\n", rand);
}
