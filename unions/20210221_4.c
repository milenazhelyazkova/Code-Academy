/*
Задача 4.
Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.
struct name newvariable = {21,2,2020};
newvariable.memeber = value;
struct name newvariable = {.memeber3=2020,.member1=21, .memeber2=2};
*/
#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
}; /* може и тук }conttractdate; */
int main(){
    struct date contractdate = {21, 2, 2021};
    /*  contractdate.day = 21;
        contractdate.month = 2;
        contractdate.yaer = 2021;

        struct date contractdate = {.year=2021, .day=21, .month=2};
    */
    printf("Your contract date is: %d.%d.%d", contractdate.day, contractdate.month, contractdate.year);
    return 0;
}