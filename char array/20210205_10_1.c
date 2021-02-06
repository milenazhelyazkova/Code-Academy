/*
Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.
*/
#include <stdio.h>

void strncat(char *s, char *t, int n);

int main(){
    char s[] = "Milena";
    char t[] = "Zhelyazkova";
    int number = 2;
    strncat(s, t, number);
    printf("%s", s);
    return 0;
}
void strncat(char *s, char *t, int n){
    int i=0,j=0;
    while(*s)
       s++; /* i is the index of the last element is s */
    while(n-->0 && *t) /* n is decremented every iteration until >0, and t = 0 */
        *s++=*t++;
    *s = '\0';   
}           