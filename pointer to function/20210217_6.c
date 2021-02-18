/* 
Задача 6.
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";
*/
#include <stdio.h>
#include <string.h>
#define MAXSIZE 1000

int main(){
    char str[MAXSIZE];
    char search = 'a';
    int i, count = 0;
    memset(str,'\0', sizeof(str));
    char my_str[] = "This is a string to test my idea for search in a char and";
    strcpy(str, my_str);
    while(str[i] !='\0'){
        if(search == str[i])
            count++;
        i++;
    }
    printf("Letter '%c' is found %d times in the text.", search, count);
}