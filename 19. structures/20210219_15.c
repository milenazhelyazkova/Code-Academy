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
    int hour;
    int min;
    int sec;
};
struct time addsec(struct time, int hour, int min, int sec, int addsec){
    struct time current = {hour,min,sec+addsec};
    if(current.sec >=60){
        current.min++;
        current.sec -=60;
    }
    return current;
}
struct time addmin(struct time, int hour, int min, int sec, int addmin){
    struct time current = {hour, min+addmin, sec};
    if(current.min >=60){
        current.hour++;
        current.min -=60;
    }
    return current;
}
struct time addhour(struct time, int hour, int min, int sec, int addhour){
    struct time current = {hour+addhour, min, sec};
    if(current.hour >=24){
        current.hour -=24;
    }
    return current;
}

