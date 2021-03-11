/*
Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.
*/
#include <stdio.h>
#include <string.h>
#include <errno.h>

void countBreckets(FILE *fp);

int main()
{

    FILE *fp = NULL;
    fp = fopen("task2.txt", "r");
    if (NULL == fp)
    {
        perror("ERR: ");
    }
    else
    {
        countBreckets(fp);
    }

    fclose(fp);
    return 0;
}
void countBreckets(FILE *fp)
{
    int counter = 0;
    int c;
    while ((c = getc(fp))!= EOF)
    {
        if (c == '{' || c == '[' || c == '(')
        {
            counter++;
        }
        if (c == '}' || c == ']' || c == ')')
        {
            counter--;
        }
    }

    if (counter == 0)
    {
        printf("All open brackets are closed\n");
    }
    else
    {
        printf("You have not closed %d brackets", counter);
    }
}
