/*
Задача 11.
Намерете позицията си във файла.
ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    fpos_t position;

    fp = fopen("task11.txt", "wt");
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    fgetpos(fp, &position);
    printf("%lld", position);

    fputs("Hello, World!", fp);
    fgetpos(fp, &position);
    printf("\n%lld", position);
    
    fclose(fp);

    return (0);
}