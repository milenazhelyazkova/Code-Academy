/*
Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено
*/
#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main(int argc, char *argv[]){
    char s[] = argv[1];
    char t[] = argv[2]; 
    if(s==NULL || t==NULL){
        exit(1);
    int i,j;
    for(i=0,j=strlen(s)-1; i<j; i++,j--){
        if(s[i] > 127 || s[j] < 0)
            exit(2);
    }
    int rez= strend(s,t);
    if(rez==1){
        printf("The %s is at the end of %s", t,s );
    }
    if(rez==0){
        printf("The %s is NOT at the end of %s", t,s );
    }
    return 0;
}
int strend(char *s, char *t) {
    int i = strlen(s) - strlen(t);/* number of elements of s - number of elements of t is the position from which we want to check s */
    for(;*t !='\0'; s++,t++)
        if(*(s+ i) != *t) 
           return 0;
    return 1;
}
