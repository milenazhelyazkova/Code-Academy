/*
Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.

*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(){
    char s[] = "Hello!";
    reverse(s);
    printf("%s\n", s);
    return 0;
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