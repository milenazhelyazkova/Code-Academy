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
    while(s[i]!= '\0')
        i++; /* i is the index of the last element is s */
    while(j< n){ /* the next element of s becomes the first element of t, then incremnt the indexes, this copy t */
        s[i]=t[j];
        i++;
        j++;
    }                /* when s[i] == '\0' and t[i] == '\0' the loops is edned */
}