/*
Задача 19:
 Напишете стандартната програма за Linux cat , която приема като 
аргументи от командния ред имена на файлове и изкарва съдържанието 
им на стандартния изход. Ако на програмата не са подадени никакви 
аргументи, то тя да изкара съдържанието подадено от стандартния вход 
на стандартния изход. въведи .\a.exe 20210308_19.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void filecopy(FILE *, FILE *);

int main(int argc, char *argv[])
{
  FILE *fp;

  if (argc == 1) /* no args; copy standard input */
  {
    fprintf(stderr, "No files given");
    filecopy(stdin, stdout);
  }
  else
    while (--argc > 0)
      if ((fp = fopen(*++argv, "r")) == NULL)
      {
        printf("cat: can't open %s\n", *argv);
        exit(1);
      }
      else
      {
        filecopy(fp, stdout);
        fclose(fp);
      }
  return 0;
}

/* filecopy: copy file ifp to file ofp */

void filecopy(FILE *ifp, FILE *ofp)
{
  int c;
  while ((c = getc(ifp)) != EOF)
  {
    putc(c, ofp);
  }
}