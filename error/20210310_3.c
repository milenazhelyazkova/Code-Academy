/*
Задача 3.
Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINELENGTH 80
#define LINESPERPAGE 42

void printpages(FILE *, FILE *);

int main(int argc, char *argv[]) {
    FILE *fp;
    char *prog = argv[0];
    int linecount = 0;

    if (argc == 1) /* no args; copy standard input */
    {
        fprintf(stderr, "No files given");
        printpages(stdin, stdout);
    }
    else
        while (--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL) {
                fprintf(stderr, "%s: can't open %s\n", prog, *argv);
                exit(1);
            } else {
                fprintf(stdout, "\n\n\t\t\t\tFILE: %s\n\n\t\t\t\tPAGE 1\n\n", *argv);
                printpages(fp, stdout);
                fclose(fp);
            }

    if (ferror(stdout)) {
        fprintf(stderr, "%s: error writing stdout\n", prog);
        exit(2);
    }
    return 0;
}

/* filecopy: copy file ifp to file ofp */

void printpages(FILE *ifp, FILE *ofp)
{
    int c;
    int line=0;
    int pg=1;

    while ((c = getc(ifp)) != EOF)
    {
        putc(c, ofp);
        if (c == '\n') {
            line = line + 1;
            if (line == LINESPERPAGE)
            {
                pg = pg + 1;
                fprintf(stdout, "\n\n\t\t\tPAGE %d\n\n", pg);
                line = 0;
            }
        }

    }
}