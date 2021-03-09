/*
Задача 5
Напишете програма, която чете числа от един текстов файл и ги записва 
в друг текстов файл
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char c;
  FILE *from, *to;

  from = fopen("task5.txt", "r");
  if (from == NULL)
  {
    perror("task5.txt doesn't exist.");
    exit(1);
  }

  to = fopen("copy5.txt", "w");
  if (to == NULL)
    {
      perror("copy5.txt doesn't exist.");
      exit(1);
    }
    while ((c = getc(from)) != EOF) {
        putc(c, to);
    }
    
    fclose(to);
    fclose(from);

    return 0;
}