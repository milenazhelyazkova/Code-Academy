/*
Задача 8.
Напишете стринг в текстов файл. 
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да 
запишем, вторият параметър е указател към файла, в който ще 
пишем.
Функцията ще записва символи от стринга догато достигне 
терминиращ символ \0, но не го пише в новия файл.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    char str[60] = "\nHellow group!";
    fp = fopen("task.txt", "a");
    if (fp == NULL)
    {
        perror("Error opening file\n");
        return (-1);
    }
    else{
        fputs(str, fp);
        fputs(str, fp);
    }
    fclose(fp);

    return 0;
}

