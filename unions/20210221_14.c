/*
Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.
*/
#include <stdio.h>
#pragma pack(1)

struct Date{
    unsigned short int day;
    unsigned short int month;
    unsigned short int year;
}date;
struct Date getdate(){
    printf("Enter day: ");
    scanf("%u", &date.day);
    printf("\nEnter month: ");
    scanf("%u", &date.month);
    printf("\nEnter year: ");
    scanf("%u", &date.year);
    return date;
}
void validation(struct Date date){
    /* check year */
    if(date.year>=1900 && date.year<=9999)
    {
        /*check month */
        if(date.month>=1 && date.month<=12)
        {
            /* check days */
            if((date.day>=1 && date.day<=31) && (date.month==1 || date.month==3 || date.month==5 || date.month==7 || date.month==8 || date.month==10 || date.month==12))
                printf("Date is valid.\n");
            else if((date.day>=1 && date.day<=30) && (date.month==4 || date.month==6 || date.month==9 || date.month==11))
                printf("Date is valid.\n");
            else if((date.day>=1 && date.day<=28) && (date.month==2))
                printf("Date is valid.\n");
            else if(date.day==29 && date.month==2 && (date.year%400==0 ||(date.year%4==0 && date.year%100!=0)))
                printf("Date is valid.\n");
            else
                printf("Day is invalid.\n");
        }
        else
        {
            printf("Month is not valid.\n");
        }
    }
    else
    {
        printf("Year is not valid.\n");
    }
}
int main(){
    date = getdate();
    printf("\nYour date is: %u.%u.%u\n", date.day, date.month, date.year);

    validation(date);
    return 0;
}
