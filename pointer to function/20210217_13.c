/*
Задача 13.
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'
*/

#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(){
    char s[100];
    printf("Enter text: ");
    gets(s);
    reverse(s);
    printf("%s\n", s);
    return 0;
}
void reverse(char s[]){
    int c;
    char *t;
    for(t=s + strlen(s) - 1; s < t; s++, t-- ){ /* as s points to the first character of the string, t is to the last, ecxluding \0*/
        c= *s;
        *s = *t;
        *t = c;
    }
}