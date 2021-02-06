/*
Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .
*/
#include <stdio.h>

void strncpy(char *s, char *t, int n);

int main(){
    char s[20];
    char t[] = "Zhelyazkova";
    int number = 2;
    strncpy(s, t, number);
    printf("%s", s);
    return 0;
}
void strncpy(char *s, char *t, int n){
    while (n-- > 0 && (*s++ = *t++))
        ;
    *s = '\0';
}
