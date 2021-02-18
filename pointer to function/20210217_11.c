/*
Задача 11.
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
using ascii table with range 33 - 126.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PassGen(char *PassString);
char Password [13] = {'$'};

int main(){
    srand(time(0));

    char answer ='n';
    void (*PasswordGenerator)(char *) = PassGen;

    while(answer!='y'){
        PasswordGenerator(Password);
        printf("Your new password is:\n");
        for (int i = 0; i< 12; i++){
            printf("%c", Password[i]);
        }

        printf("\nDo you like it? Press y for yes or anything for no\n");
        scanf("%c", &answer);
    }

    printf("Nice, Here is your password:\n");
        for (int i = 0; i< 12; i++){
            printf("%c", Password[i]);
        }
}
void PassGen(char *PassString){
    for (int i = 0; i< 12; i++){
        PassString[i] =  33 + rand()%94;
    }
    PassString[i] = '\0';
}