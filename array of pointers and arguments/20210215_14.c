/*
Решете задачата за генериране на 6 буквена парола с
пойнтери.

*/

#include <stdio.h>
#include <stdlib.h>

void *pass();
char password[7];

int main(){
    
    printf("Here is your pass: %s", pass());
    printf("\nHere is your pass: %s", pass());
    return 0;
}
void *pass(){
    char *p;
    for(p = password; p < password+6; p++) {
        *p = 'a' + (rand() % 26);
    }
    *p = '\0';
    return password;
}
