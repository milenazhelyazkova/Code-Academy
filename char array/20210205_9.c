/*
Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .
*/
#include <stdio.h>

char* strncpy(char *s, char *t, size_t n);

int main(){
    char s[20];
    char t[] = "Zhelyazkova";
    int number = 2;
    strncpy(s, t, number);
    printf("%s", s);
    return 0;
}
char* strncpy(char *s, char *t, size_t n){
    while (n > 0){
        *s = *t;
        t++;
        s++;
        n--;
    }
}
