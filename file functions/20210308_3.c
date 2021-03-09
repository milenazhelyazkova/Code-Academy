/*
Задача 3.
Създайте test1.txt файл в избрана от вас директория. Сложете някакви 
данни в него на латиница - име, поздрав, брой. Отворете за четене. 
Използвайте fgetc() , която взема само един char от файла. Направете 
while цикъл, за да изпишете всички символи, проверявайте за край на 
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е 
NULL, изпишете грешка.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = NULL;
    char *filename = "task3.txt";
    fp = fopen(filename, "r");
    if(fp==NULL){
        printf("Failed to open %s.\n", filename);
        exit(1);
    }
    else{
        char c = fgetc(fp); 
        while (c != EOF){ 
            printf ("%c", c); 
            c = fgetc(fp); 
        }
    }
    fclose(fp); 

    return 0;
}   