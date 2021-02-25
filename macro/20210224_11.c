/*
Задача 11.
Ако имеме дефинирано макро
#define М 
кои от по долните дефиниции ще пропаднат:
а) #if M - ще пропадне
b) #ifdef M - ще върне истина, макроса е дефиниран
c) #ifndef M - ще пропадне, макроса вече е дефиниран
d) #if defined(M) - ще сработи, макоса е дефиниран
e) #if !defined(M) - ще пропадне, името е дефинирано */

#include <stdio.h>
#define M 

int main(){
    printf("macros in use:\n");

   /* #if M  - ще даде грешка при компилиране, тъй като търси М, но няма с какво да го замени
    printf("#if\n");
    #endif */

    #ifdef M
    printf("#ifdef M\n");
    #endif

    #ifndef M
    printf("#ifndef M\n");
    #endif

    #if defined(M)
    printf("#if defined(M)\n");
    #endif

    #if !defined(M)
    printf("#if !defined(M)\n");
    #endif

    return 0;
}