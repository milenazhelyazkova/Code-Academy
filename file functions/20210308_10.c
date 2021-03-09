/*
Задача 10.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long 
int, който отговаря на позицията във файла.
Дефинирате променлива 
long fpos = ftell(pfile) 
Променливата съхранява текущата ви позицията в байтове от 
началото на файла и вие можете да се върнете на нея по всяко 
време.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    FILE *fp = NULL;
    fp = fopen("task10.txt", "wt");
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    long fpos = ftell(fp);
    printf("%ld", fpos);
    char str[60] = "milena";
    fputs(str,fp);
    long fpos2 = ftell(fp);
    printf("\n%ld", fpos2);
    fclose(fp);
    fp = NULL;
    return 0;
}

