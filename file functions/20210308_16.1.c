/*
Задача 16.
Напишете програма, която премахва от файл номер на ред и 
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а 
запишете съдържанието на файла без конкретния ред в друг файл).
*/

#include<stdio.h>
int main(){
    FILE *from, *to;
    char file1[] ="task16.txt";
    char file2[] ="lineRem16.txt";
    char curr;
    int del, line_number = 0;
    printf("Please enter the line number you want to delete : ");
    scanf("%d", &del);
    from = fopen(file1,"r");
    to = fopen(file2, "w");
    curr = getc(from);
    if(curr!=EOF) {
        line_number =1;
    }
    while(1){
        if(del != line_number){
            putc(curr, to);
        }
        curr = getc(from);
        if(curr =='\n'){
            line_number++;
        }
        if(curr == EOF) 
            break;
    }
    fclose(from);
    fclose(to);
    to = NULL;
    from = NULL;
    /*------ Read the file ----------------*/
    to = fopen(file2, "r");
    curr = fgetc(to);
    printf(" Now the content of the file %s is : \n", file2);
    while (curr != EOF)
    {
        printf("%c", curr);
        curr = fgetc(to);
    }
    fclose(to);
    to = NULL;
    return 0;
}