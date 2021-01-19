
#include <stdio.h>
int main()
{
    int A = 0;
    int B = 0;

    if(! ( A && B ) == (! A || ! B))  {
        printf("1.the same");
    }
    if (! ( A || B ) == (! A && ! B)) {
        printf("\n2.the same");
    }
    A = 1;
    B = 0;
    
    if(! ( A && B ) == (! A || ! B))  {
        printf("\n3.the same");
    }
    if (! ( A || B ) == (! A && ! B)) {
        printf("\n4.the same");
    }
    A = 0;
    B = 1;
    
    if(! ( A && B ) == (! A || ! B))  {
        printf("\n5.the same");
    }
    if (! ( A || B ) == (! A && ! B)) {
        printf("\n6.the same");
    }
    A = 1;
    B = 1;

    if(! ( A && B ) == (! A || ! B))  {
        printf("\n7.the same");
    }
    if (! ( A || B ) == (! A && ! B)) {
        printf("\n8.the same");
    }
    
}/*Упражнение is 19*. Докажете опитно теоремите на Де Морган:
! ( А && B ) = ! A || ! B
! ( A || B ) = ! A && ! B
Под опитно доказване се разбира да се направят всичките четири
комбинации на A и B и за тях да се провери горното*/