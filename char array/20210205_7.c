/*
Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено
*/
#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main(){
    char s[] = "Milena";
    char t[] = "ena"; /* try with enW */
    printf("%d",strend(s,t));
    return 0;
}
int strend(char *s, char *t) {
    int i = strlen(s) - strlen(t);/* number of elements of s - number of elements of t is the position from which we want to check s */
    for(;*t !='\0'; s++,t++)
        if(*(s+ i) != *t) 
           return 0;
    return 1;
}
