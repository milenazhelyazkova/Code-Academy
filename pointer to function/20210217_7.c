/* 
Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква.
*/
#include <stdio.h>
#include <string.h>

int main() {
    int alfabet[26];
    memset(alfabet, 0 , sizeof(alfabet));
    char str[] = "C is a procedural programming language. It was initially developed by Dennis Ritchie in the year 1972.It was mainly developed as a system programming language to write an operating system. The main features of C language include low-level access to memory, a simple set of keywords, and clean style, these features make C language suitable for system programmingslike an operating system or compiler development.Many later languages have borrowed syntax/features directly or indirectly from C language. Like syntax of Java, PHP, JavaScript, and many other languages are mainly based on C language. C++ is nearly a superset of C language (There are few programs that may compile in C, but not in C++).";
    int i = 0;
    char c;
    while ((c = str[i++]) != '\0')
    {
        if (c >= 'A' && c <= 'Z')
        {
            alfabet[c - 'A']++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            alfabet[c - 'a']++;
        }
    }
    for (i=0; i < 26; i++){
        char lowLetter = i + 'a';
        char upperLetter = i + 'A';
        printf("%c / %c: %d\n", lowLetter, upperLetter, alfabet[i]);
    }
    return 0;
}