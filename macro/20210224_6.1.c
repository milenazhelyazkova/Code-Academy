/*
Задача 6. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ” 
*/
#include <stdio.h>
/* добавя префикс към функцията printf */
#define PRINT_DATA(...) printf("Date is: %.2d.%d.%d", __VA_ARGS__)

int main(void) {
    PRINT_DATA(4, 2, 2021);
    return 0;
}
