/*
Задача 13.
Напишете програма, която да намери общия брой на 
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст. 
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да 
брои броя на редовете.
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main()
{
    FILE *fp = NULL;
    char *filename = "task13.txt";
    fp = fopen(filename, "rt"); 
    int c, counter;
    if (fp == NULL)
        printf("Failed to open % s.\n", filename);
    else{
        while ((c=fgetc(fp)) != EOF){ 
            if(c == '\n'){
                counter++;
            }
        }
    }
    printf("Number in rows in task13.txt are: %d", counter+1); /* because we hava '\n' only between lines not after the last line*/
    fclose(fp);
    fp = NULL;

    return 0;
}