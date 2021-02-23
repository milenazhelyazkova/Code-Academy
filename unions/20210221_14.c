/*
Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.
*/
#include <stdio.h>
#pragma pack(1)

struct Data{
    unsigned short int day:6;
    unsigned short int month:6;
    unsigned short int year:12;
};

int main(){
    struct Data data = {21,2,2021};
    printf("Your data is: %u.%u.%u", data.day, data.month, data.year);
    return 0;
}
