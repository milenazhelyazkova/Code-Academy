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
    return new;
}
int sec(struct time current){
    int seconds = current.sec;
    return seconds;
}
struct time add(struct time t1, struct time t2){
    t1.hour += t2.hour;
    t1.min +=t2.min;
    if(t1.min>=60){
        t1.hour++;
        t1.min -=60;
    }
    t1.sec += t2.sec;
    if(t1.sec >=60){
        t1.min++;
        t1.sec -= 60;
    }
    return t1;
}
struct time substract(struct time t1, struct time t2){ 
    if(t1.sec<t2.sec){
        t1.min--;
        t1.sec+=60;
    }
    t1.sec -= t2.sec;
    if(t1.min<t2.min){
        t1.hour--;
        t1.min +=60;
    }
    t1.min -= t2.min;
    t1.hour -=t2.hour;
    return t1;
}

int main(){
    struct time now = {22,14,33};
    printf("time now: %d:%d:%d",now.hour, now.min, now.sec);
    struct time wanted = addhour(now,1);
    printf("\ntime wanted: %d:%d:%d",wanted.hour, wanted.min, wanted.sec);
    printf("\nseconds now: %d", sec(now));
    struct time added = add(now,wanted);
    printf("\ntime after adding: %d:%d:%d",added.hour, added.min, added.sec);
    struct time substracted = substract(added,wanted);
    printf("\ntime after substracting: %d:%d:%d",substracted.hour, substracted.min, substracted.sec);
    
    return 0;
}
