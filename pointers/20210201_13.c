/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */

#include <stdio.h>
#include <string.h>

void lower(char s[]);

int main(void){

    char s[] = "HelloW I am Milena";
    printf("ORIGINAL%s", s);
    lower(s);
    printf("%s\n",s);

    return 0;
}
void lower(char s[]){
    int i=0;
    for(i;i<strlen(s);i++)
        if(s[i] >= 'A' && s[i]<= 'Z')
            s[i] = s[i] + 32;
}