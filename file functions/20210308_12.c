/*
Задача 12.
Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
Първият параметър е указател към файла, вторият и третият параметър 
оказват къде точно искаме да отидем във файла.
Референтни точки с предварително дефинирани имена:
SEEK_SET- началото на файла
SEEK_CUR- текуща позиция
fseek(fp, -10L, SEEK_CUR); връща на зад от текупата 10 bytes.
SEEK_END- края на файла
fseek(fp,0L, SEEK_END);
При текстови файлове, вторият аргумент трябва да е стойността върната от 
ftell()
За текстови файлови третият аргумент трябва да е SEEK_SET, за бинарни 
файлове и просто число в байтове.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    fpos_t position;

    fp = fopen("task12.txt", "wt");
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    fgetpos(fp, &position);
    printf("Start of file: %lld", position);

    fputs("Hello, World! This is group in code academy", fp);

    fgetpos(fp, &position);
    printf("\nEdn of file is current position: %lld", position);

    fseek(fp, -10L, SEEK_CUR);

    fgetpos(fp, &position);
    printf("\nBack 10 bytes from the current position is: %lld", position);

    fseek( fp, 7, SEEK_SET ); /* 7 bites from the beggining */
    fgetpos(fp, &position);
    printf("\n7 from the beggining: %lld", position);

    fseek(fp, 0L, SEEK_END);
    fgetpos(fp, &position);
    printf("\nEdn of file is current position again: %lld", position);

    
    fclose(fp);

    return (0);
}