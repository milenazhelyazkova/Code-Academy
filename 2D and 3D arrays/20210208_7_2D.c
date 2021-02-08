/*
7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината. 

*/

#include <stdio.h>
extern int days[][12];
void date(int year, int month, int day);
void choiceDate();

int main(){
    choiceDate();
    return 0;
}
void choiceDate(){
    int year, month, day;
    printf("Enter an year:\n");
    scanf("%d", &year);
    printf("Enter a month:\n");
    scanf("%d", &month);
    printf("Enter a day:\n");
    scanf("%d", &day);
    date(year, month, day);
}
void date(int year, int month, int day){
    int i;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        for (i = 0; i < month - 1; i++)
            day += days[1][i];
        printf("%d is a leap year. Day number: %d\n", year, day);
    } else{
        for (i = 0; i < month - 1; i++)
            day += days[0][i];
        printf("%d is not a leap year. Day number: %d\n", year, day);
    }
}
int days[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };