/*
Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.

*/
#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main(void){
    int number = 123;
    char string[20];
    itoa(number,string);
    printf("'%s'", string);
    return 0;
}
void itoa(int n, char s[]){
    char *t = s;
    do{
        *s++ = n % 10 + '0';
    }while ((n/= 10)>0);
    *s= '\0';
    reverse(t);
}
void reverse(char s[]){
    int c;
    char *t;
    for(t=s + strlen(s) - 1; s < t; s++, t-- ){ /* as s points to the first character of teh string, t is to the last, ecxluding \0*/
        c= *s;
        *s = *t;
        *t = c;
    }
}