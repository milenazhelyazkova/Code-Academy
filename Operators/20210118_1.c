#include <stdio.h>
int main()
{
    int x = 10;
    int y = 10;
    int false;
    int true;

    true = x == y;
    false = x != y;
    printf("true = %d\nfalse = %d", true, false);
}