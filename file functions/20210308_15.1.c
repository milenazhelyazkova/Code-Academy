/*
Задача 15.
Напишете програма, която печата съдържанието на файл в обратен 
ред.
Използвайте fseek функцията, за да отидете накрая на файла. 
Използвайте ftell функцията, за да намерите позицията на пойнтера. 
Покажете на екран файла, обърнат в обратен ред.
*/

#include<stdio.h>
#include<errno.h>

/* 
    to count the total number of characters 
    inside the source file
*/

int main()
{
    int i;
    long cnt;
    char ch, ch1;
    FILE *from, *to;

    if (from = fopen("task15.txt", "r"))
    {
        printf("The FILE has been opened...\n");
        to = fopen("reverse15.txt", "w");

        /*
            Make the pointer from to point at the
            last character of the file
        */
        fseek(from, -1L, SEEK_END); /*  very last byte of the file is the one found at (-1, SEEK_END)?  */
        long cnt = ftell(from)+1;  /* because positions stars from 0, i need number of possitions  */
        printf("Number of characters to be copied %d\n", cnt);

        while (cnt)
        {
            ch = fgetc(from); /* moves 1 position forward */
            fputc(ch, to);
            fseek(from, -2L, SEEK_CUR); // shifts the pointer to the previous character
            cnt--;
        }
        printf("\n**File copied successfully in reverse order**\n");
    }
    else
    {
        perror("Error occured\n");
    }
    fclose(from);
    fclose(to);

    return 0;
}
