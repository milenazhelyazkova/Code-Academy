/*
ЗЗадача 3.Напишете функцията strcpy(s, t), която копира низа t в низа s.
*/
#include <stdio.h>

void our_strcpy(char *s, char *t);

int main(){
    char name[] = "Milena";
    char test[]= "Test";
    printf("Original text in array 1: %s\n", name); 
    printf("original text in array 2 %s\n", test);
    our_strcpy(name, test); /* copy the second argument, into the first */
    printf("After function text in array 1: %s\n", name);
    printf("After function text in array 2: %s", test);
    return 0;
}
void our_strcpy(char *s, char *t){
    int i = 0;
    while ((*s = *t) != '\0'){
        s++;
        t++;
    }
}