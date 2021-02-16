/*
Задача 18. Връщаме се на кода написан в задача 15. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.
*/

#include <stdio.h>
#include <string.h>

void copy(char *destination, char *source);

int main(){
    char string1[] = "A string to be copied.";
    char string3[] = "I am very good in strings coping!";
    char string2[100];
    char string4[100];
    copy(string2, string1);
    printf("%s\n", string2);
    copy(string4, string3);
    printf("%s", string4);
    return 0;
}
void copy(char *destination, char *source){
   /* strlen = elements number excluding the Null character, so from 0 to strlen , the last index is the '\0'*/
    for(int i = strlen(source)-1; i>=0 ; i--)
        destination[i] = source[i];
    destination[strlen(source)] = '\0'; /* the last element is '\0' */
}
