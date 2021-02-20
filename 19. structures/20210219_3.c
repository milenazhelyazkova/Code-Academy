/*
Задача 3. Указатели към структура, предаване на структура на функция по
стойност и по референция
*/
#include <stdio.h>
#include <string.h>
struct Paper
{
    unsigned Id;
    char Title[64];
    char Author[64];
    char Subject[256];
};
void printPaper(struct Paper paper)
{ /* by value */
    printf("Paper id : %d\n", paper.Id);
    printf("Paper title : %s\n", paper.Title);
    printf("Paper author : %s\n", paper.Author);
    printf("Paper subject : %s\n", paper.Subject);
}
/* parameter by pointer / reference to the value */
void printPtrPaper(struct Paper *pPaper)
{
    printf("Paper id : %d\n", pPaper->Id);
    printf("Paper title : %s\n", pPaper->Title);
    printf("Paper author : %s\n", pPaper->Author);
    printf("Paper subject : %s\n", pPaper->Subject);
}
int main()
{
    struct Paper myPaper = {123456, "Paper title", "Autor", "paper subject"};
    printPaper(myPaper);
    printf("---\n");
    printPtrPaper(&myPaper);
    return 0;
}
