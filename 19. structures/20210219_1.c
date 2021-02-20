/*
Задача 1. Дефиниране на структура, достъп до членове
*/
#include <stdio.h>
#include <string.h>
struct book {
unsigned ID;
char title[50];
char author[50];
char subject[200];
};

int main()
{
    struct book book1 = {123, "C Programming", "Miro", "Programming in C for begibbers"};
    printf("Paper id : %d\n", book1.ID);
    printf("Paper title : %s\n", book1.title);
    printf("Paper author : %s\n", book1.author);
    printf("Paper subject : %s\n", book1.subject);
    return 0;
}
/*  struct book book1;
    book1.ID = 123;
    book1.title = "C programming";
    book1.author = "Miro";
    book1.sybject = "Programming in C for begibbers";
    */

