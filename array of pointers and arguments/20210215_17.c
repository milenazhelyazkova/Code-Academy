/*
Задача 17. Направете същото, както в задача 16., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.
The C library function void *memset(void *str, int c, size_t n) copies the character c (an unsigned char) 
to the first n characters of the string pointed to, by the argument str.
This function returns a pointer to the memory area str.
Parameters:
str − This is a pointer to the block of memory to fill.
c − This is the value to be set. The value is passed as an int, 
but the function fills the block of memory using the unsigned char conversion of this value.
n − This is the number of bytes to be set to the value.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "A string to be copied.";
    char string3[] = "I am very good in strings coping!";
    char string2[100];
    char string4[100];
    memset(string2, '\0', sizeof(string2));
    memset(string4, '\0', sizeof(string4));
    puts(string4); /* will print enpty row */
    /* memset(string4, 'A', 10); will print AAAAAAAAAA */
    strcpy(string2, string1); 
    puts(string2);
    printf("%s", strcpy(string4, string3));
    return 0;
}
