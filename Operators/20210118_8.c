
/*Упражнение 8*. Напишете функция int isLetter(char c), която проверява дали
подадения параметър е буква или не е буква от ASCII таблицата
главни букви [65 - 90], малки букви [97-122]*/
#include <stdio.h>

int isLetter(char c);

int main(){
    char c;
    printf("Type 1 symbol, number or letter\n");
    scanf("%c", &c);
    isLetter(c);

    return 0;
}

int isLetter(char c){
    int number = (int) c; //Кастване на 'c' в  цифра от ASCII таблицата.
    if ((number >= 65 && number <= 90) || (number >= 97 && number <= 122))
    {
        printf("This is letter.");
    } 
    else 
    {
        printf("This is not a letter.");
    }
}
