/*
Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. 
Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0
*/
#include <stdio.h>

int our_strcmp(char *s, char *t);

int main(){
    char s[] = {1,2,3,4,5,6,7};
    char t[] = {1,2,3,4,5,8,7};
    printf("%d", our_strcmp(s,t));  
    return 0;
}
int our_strcmp(char *s, char *t){
    for(;*s == *t; s++,t++) /* if the content in the first elements of s and t is the same, increment the position of the elements and check the next */
        if(*s == '\0')
            return 0; /* s and t are the same until the end */
    return *s - *t; /* if the content in s and t is different, if content in s if less then in t , the result will be negative */
}
