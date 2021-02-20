/*
Задача 15.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.
*/
struct time{
    int sec;
    int min;
    int hour;
};
struct time addsec(struct time, int sec, int min, int hour, int addsec){
    struct time current = {sec+addsec,min,hour};
    if(current.sec >=60){
        current.min++;
        current.sec -=60;
    }
    return time current;
}
struct time addmin(struct time, int sec, int min, int hour, int addmin){
    struct time current = {sec,min+addmin,hour};
    if(current.min >=60){
        current.hour++;
        current.min -=60;
    }
    return time current;
}
struct time addhour(struct time, int sec, int min, int hour, int addhour){
    struct time current = {sec,min,hour+addhour};
    if(current.hour >=24){
        current.hour -=24;
    }
    return time current;
}
