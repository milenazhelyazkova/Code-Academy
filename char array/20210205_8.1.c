/*
Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.

*/
#include <stdio.h>

int atoi(char s[]);

int main(void){
    char number[] = "123";
    printf("%d", atoi(number));
    return 0;
}
int atoi(char s[]){
    int n=0;
    for (; *s >= '0' && *s <= '9'; s++)
        n = 10 * n + (*s - '0');
    return n;
}
