/*
Задача 13->Опишете времето: часове:минути:секунди като структура
t_time-> Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути-> добавяне на часове към
дадена променлива от тип struct t_time-> Напишете следните
функции: връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
t_time-> Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип->
Използвайте тези функции, за да се уверите, че работят коректно-> В
решението трябва да се използва динамично заделяне на памет и typedef->
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct time{
    int hour;
    int min;
    int sec;
}t_time;
t_time *addsec(t_time *current,int addsec){
    current->sec +=addsec;
    if(current->sec >=60){
        current->min++;
        current->sec -=60;
    }
    return current;
}
t_time* addmin(t_time *current,  int addmin){
    current->min +=addmin;;
    if(current->min >=60){
        current->hour++;
        current->min -=60;
    }
    return current;
}
t_time *addhour(t_time *current, int addhour){
    current->hour +=addhour;
   
    /*if(new->hour >=24){
        new->hour -=24; 
    } */
    return current;
}
int sec(t_time *current){
    int seconds = current->sec;
    return seconds;
}
t_time fromSecTime(int secunds){
    t_time new;
    int result = secunds/3600;
    new.hour = result;
    new.min = (secunds - (result*3600))/60;
    new.sec = secunds - (result*3600) - new.min*60;
    return new;
}
t_time *add(t_time *t1, t_time *t2){
    t1->sec += t2->sec;
    if(t1->sec >=60){
        t1->min++;
        t1->sec -= 60;
    }
    t1->min += t2->min;
    if(t1->min >=60){
        t1->hour++;
        t1->min -=60;
    }
    t1->hour += t2->hour;
    /*if(t1->hour>=24){
        t1->hour-=24;
    }*/
    return t1;
}
t_time *substract(t_time *t1, t_time *t2){ 
    if(t1->sec<t2->sec){
        t1->min--;
        t1->sec +=60;
    }
    t1->sec -= t2->sec;
    if(t1->min<t2->min){
        t1->hour--;
        t1->min +=60;
    }
    t1->min -= t2->min;
    t1->hour -=t2->hour;
    /*if(t1->hour<t2->hour){
        t1->hour +=24;
    } */
    return t1;
}
void printTime(t_time *time){
    printf("%02d:%02d:%02d\n", time->hour, time->min, time->sec);
}

int main(){
    t_time *now=NULL;
    now=(t_time*)malloc(sizeof(t_time));
    now->hour = 22;
    now->min =14;
    now->sec = 33;
    printf("time now: ");
    printTime(now);
    t_time *wanted = (t_time*)malloc(sizeof(t_time));
    wanted = addhour(now,1);
    printf("\ntime wanted: ");
    printTime(wanted);
    printf("\nseconds now: %d\n", sec(now));
    t_time *time2=NULL;
    time2=(t_time*)malloc(sizeof(t_time));
    time2->hour = 22;
    time2->min =14;
    time2->sec = 33;
    add(time2,wanted);
    printf("\ntime after adding: ");
    printTime(time2);
    substract(time2,wanted);
    printf("\ntime after substracting: ");
    printTime(time2);
    free(now);
    free(wanted);
    free(time2);
    
    return 0;
}
