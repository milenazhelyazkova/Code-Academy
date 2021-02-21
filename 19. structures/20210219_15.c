/*
Задача 15.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. 
Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. 
Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.
*/
#include <stdio.h>
struct time{
    int hour;
    int min;
    int sec;
};
struct time addsec(struct time current,int addsec){
    struct time new = {current.hour,current.min,current.sec+addsec};
    if(new.sec >=60){
        new.min++;
        new.sec -=60;
    }
    return new;
}
struct time addmin(struct time current,  int addmin){
    struct time new = {current.hour, current.min+addmin, current.sec};
    if(new.min >=60){
        new.hour++;
        new.min -=60;
    }
    return new;
}
struct time addhour(struct time current, int addhour){
    struct time new = {current.hour+addhour, current.min, current.sec};
    if(new.hour >=24){
        new.hour -=24;
    }
    return new;
}
int sec(struct time current){
    int seconds = current.sec;
    return seconds;
}

int main(){
    struct time now = {12,14,33};
    printf("time now: %d:%d:%d",now.hour, now.min, now.sec);
    struct time wanted = addhour(now,5);
    printf("\ntime wanted: %d:%d:%d",wanted.hour, wanted.min, wanted.sec);
    printf("\nseconds now: %d", sec(now));

    return 0;
}
