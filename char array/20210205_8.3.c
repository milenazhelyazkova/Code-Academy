/*
Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.

*/
#include <stdio.h>

double atof(char s[]);

int main(void){
    char number[] = "123.321";
    printf("%lf", atof(number));
    return 0;
}
double atof(char s[]){
    double n;
    double power = 1.0;
    for (; *s >= '0' && *s <= '9'; s++)
        n = 10.0 * n + (*s - '0');
    if (*s== '.')
        s++;
    for (; *s >= '0' && *s <= '9'; s++){
        n = 10.0 * n + (*s - '0');
        power *=10;
    }
    return n/power;
}
