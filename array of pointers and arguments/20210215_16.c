/*
Задача 16.
Направете същото, както в задача 15, но използвайки
готовата функция strcpy)
prototype: char *strcpy(char *destination,const char * source)
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "A string to be copied.";
    char string3[] = "I am very good in strings coping!";
    char string2[100];
    char string4[100];
    strcpy(string2, string1); /* copies the string source to the destination with Null character, but do not check if it will fit */
    /* if sourse lenth > destination lenth undefined behavior*/
    printf("%s\n", string2);
    printf("%s", strcpy(string4, string3));
    return 0;
}
