/*
Задача 14.
Напишете програма, която да обръща всички символи в 
текстов файл, с главни букви запишете резултата в друг 
временен файл. След това преименувайте новия файл 
с името на оригиналния файл и изтрийте временното 
име. Отпечатайте съдържанието на файл на 
стандартния изход с главни букви.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void printOut(FILE *fp);

int main()
{
    FILE *from, *to;
    char ch;
    from = fopen("task14.txt", "r");
    if (from == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }
    to = fopen("capLet14.txt", "w");
    if (to == NULL)
    {
        puts("File does not exist..");
        fclose(from);
        exit(1);
    }
    while ((ch = fgetc(from)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, to);
    }
    printf("\nFile successfully copied..");
    fclose(from);
    fclose(to);
    remove("task14.txt");
    if (rename("capLet14.txt", "task14.txt"))
        printf("Failed to rename file.");
    else
        printf("File renamed successfully.");
    remove("caplet14.txt");
    FILE *fp = NULL;
    fp = fopen("task14.txt", "r");
    
    printOut(fp);

    fclose(fp);
    fp = NULL;

    return 0;
}
void printOut(FILE *fp)
{
    char buffer[4096];
    while (fgets(buffer, sizeof(buffer), fp) != 0)
        fputs(buffer, stdout);
}