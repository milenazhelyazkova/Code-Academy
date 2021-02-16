/*
Задача 1. Да напишем функция char *month_name(int n), която връща указател
към символен низ, съдържащ името на n-тия месец. Да декларираме въртешен static
масив от указатели, сочещ към стрингове съдържащи имената на месеците
*/
#include <stdio.h>

char *month_name(int n);

int main(){
    int month;
    printf("Which month you want, enret number from 1 to 12: ");
    scanf("%d", &month);
    printf("Your month is: %s", month_name(month));
    return 0;
}
char *month_name(int n){
    static char *name[] = {
    "Illegal month",
    "January", "February", "March",
    "April", "May", "June",
    "July", "August", "September",
    "October", "November", "December"
    };
    char *ptr = name[n];
    if(n<0 || n>12)
        return name[0];
    return ptr;
}
