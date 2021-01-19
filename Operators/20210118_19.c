
#include <stdio.h>
int main()
{
    int A = 0;
    int B = 0;
    int isTheSame = 0;

    isTheSame = ! ( A && B ) ? printf("! ( A && B ) is 1\n") : printf("! ( A && B ) is 0\n");
    isTheSame = ! A || ! B ? printf("! A || ! B is 1\n") : printf("! A || ! B is 0\n");
    isTheSame = ! ( A || B ) ? printf("\n! ( A || B ) is 1\n") : printf("\n! ( A || B ) is 0\n");
    isTheSame = ! A && ! B ? printf("! A && ! B is 1\n") : printf("! A && ! B is 0\n");

    A = 1;
    B = 0;
    
    isTheSame = ! ( A && B ) ? printf("\n! ( A && B ) is 1\n") : printf("\n! ( A && B ) is 0\n");
    isTheSame = ! A || ! B ? printf("! A || ! B is 1\n") : printf("! A || ! B is 0\n");
    isTheSame = ! ( A || B ) ? printf("\n! ( A || B ) is 1\n") : printf("\n! ( A || B ) is 0\n");
    isTheSame = ! A && ! B ? printf("! A && ! B is 1\n") : printf("! A && ! B is 0\n");

    A = 0;
    B = 1;
    
    isTheSame = ! ( A && B ) ? printf("\n! ( A && B ) is 1\n") : printf("\n! ( A && B ) is 0\n");
    isTheSame = ! A || ! B ? printf("! A || ! B is 1\n") : printf("! A || ! B is 0\n");
    isTheSame = ! ( A || B ) ? printf("\n! ( A || B ) is 1\n") : printf("\n! ( A || B ) is 0\n");
    isTheSame = ! A && ! B ? printf("! A && ! B is 1\n") : printf("! A && ! B is 0\n");

    A = 1;
    B = 1;

    isTheSame = ! ( A && B ) ? printf("\n! ( A && B ) is 1\n") : printf("\n! ( A && B ) is 0\n");
    isTheSame = ! A || ! B ? printf("! A || ! B is 1\n") : printf("! A || ! B is 0\n");
    isTheSame = ! ( A || B ) ? printf("\n! ( A || B ) is 1\n") : printf("\n! ( A || B ) is 0\n");
    isTheSame = ! A && ! B ? printf("! A && ! B is 1\n") : printf("! A && ! B is 0\n");
    
}/*Упражнение is 19*. Докажете опитно теоремите на Де Морган:
! ( А && B ) = ! A || ! B
! ( A || B ) = ! A && ! B
Под опитно доказване се разбира да се направят всичките четири
комбинации на A и B и за тях да се провери горното*/