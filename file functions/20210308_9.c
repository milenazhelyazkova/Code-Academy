/*
Задача 9.
Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност.
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main()
{
    FILE *fp = NULL;
    char *filename = "task9.txt";
    fp = fopen(filename, "wt"); /* creates file task9.txt */
    if (fp == NULL)
        printf("Failed to open % s.\n", filename);
    /*Затворете файла.*/
    else{
        fprintf(fp, "\n\n%s %s %s", "This is", "task","9"); /* write in file */
    }
    fclose(fp);
    fp = NULL;
    fp = fopen(filename, "rt");
    int counter=0;
    int c;

    while ((c=fgetc(fp)) != EOF){ 
        counter++; 
    }
    if(counter>0)
        printf("the nimber of symbols in task9 are: %d", counter);

    else 
        printf("nothing is writen");
        return (-1);

    fclose(fp);

    return 0;
}