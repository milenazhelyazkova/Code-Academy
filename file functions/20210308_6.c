/*
Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем. 
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори;
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10], str2[10], str3[10];
    int taskNum;
    FILE *fp;

    fp = fopen("task6.txt", "w+");
    fputs("This is task 6", fp);

    rewind(fp);
    fscanf(fp, "%s %s %s %d", str1, str2, str3, &taskNum);

    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Integer |%d|\n", taskNum);

    fclose(fp);

    return (0);
}