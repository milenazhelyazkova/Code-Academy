/*
Задача 5.
Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.
struct name array[10]; / define array /
array[i].member = value; / set member value /
struct name array[10]= { {1,3,2019}, {3,4,2020}} / define and init array members /
struct name array[10] = { [1] = {3,4,2020} }; / define and init array members /
struct name array[10] = {[1].month = 4,[1].year = 2020}; / define and init array members /
*/
#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
}; 
int main(){
    int i;
    struct date contractdate[10];
    for(i=0; i<10; i++){
        contractdate[i].day = 10+i;
        contractdate[i].month = 1+i;
        contractdate[i].year = 2000+i;
    }
/*  struct date contractdate[10] = {{10,1,2000}, {11,2,2001}, {12,3,2002}, {13,4,2003}, {14,5,2004}, {15,6,2005}, {16,7,2006}, {17,8,2007}, {18,9,2008}, {19,10,2009}};
    struct date contractdate[10] = {[1] = {10,1,2000}, [9]= {19,10,2009}};
    struct date contractdate[10] = {[1].month = 1, [1].year =  2000, [1].day = 10};
*/
    for(i=0; i<10; i++){
        printf("\nYour contract %d date is: %d.%d.%d", i, contractdate[i].day, contractdate[i].month, contractdate[i].year);
    }
    return 0;
}