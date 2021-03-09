/* Задача 2.
Създайте test.txt файл в избрана от вас директория. Сложете 
някакви данни в него на латиница- име, поздрав, брой. Отворете 
файла за редактиране. Внимавайте за мястото, къде поставяте 
файла. Трябва да е там, където е сорс файлът.

*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main()
{
  /*  FILE *fopen(const char *restrict name, const char *restrict mode); */
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "wt"); /* creates file myfile.txt пиша нещо в него*/
    if (pfile == NULL)
        printf("Failed to open % s.\n", filename);
    /*Затворете файла.*/
    else{
        fprintf(pfile, "\n\n%s %s %s", "This is", "a test", "to write");
    }
    fclose(pfile);
    pfile = NULL;
    /*Преименувайте файла*/
    /*int rename(const char *oldname, const char *newname); */
    if (rename("myfile.txt", "myfile_copy.txt")) /* създава нов файл със същото име, но е празен */
        printf("Failed to rename file.");
    else
        printf("File renamed successfully.");
    /*Изтрийте файла*/
    remove("myfile.txt"); 
    return 0;
}