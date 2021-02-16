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
    memset(string2, '\0', sizeof(string2));
    memset(string4, '\0', sizeof(string4));
    int i = 0;
    i = strlen(string1); /* gives the number of ellements excluding '\0', so from 0 to strlen, are indexies off all the elements and the last one is '\0' */
    copy(&string2[i-1], &string1[i-1]); 
    printf("%s\n", string2);
    i = strlen(string3);
    copy(&string4[i-1], &string3[i-1]);
    printf("%s\n", string4);
    return 0;
}
void copy(char *destination, char *source){ 
    while (*source){ /* while ellements is not '\0' */
        *destination-- = *source --;  
    }
    destination[strlen(source)] = '\0';
}