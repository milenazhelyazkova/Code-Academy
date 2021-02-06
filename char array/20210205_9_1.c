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
    if(sizeof(s)<=number)
        number = sizeof(s) -1; /* so we garantee the last elemen is \0 */
    strncpy(s, t, number);
    printf("%s", s);
    return 0;
}
void strncpy(char *s, char *t, int n){
    while (n-- > 0 && (*s++ = *t++)) /* n is decremented until =0, and content of s = content of t and incremented until 0 = 0 */
        ;
    *s = '\0';
}
