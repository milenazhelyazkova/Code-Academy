/*
Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.
*/

#include <stdio.h>
#include <string.h>
struct test {
 struct test* ptr;
 int num;
};

int main( ) {
    struct test var1;
    struct test var2;
    var1.num = 1;
    var2.num = 2;
    var1.ptr = &var2;
    var2.ptr = &var1;
    printf("var1 number:%d",var1.ptr->num);    
    printf("\nvar2 number:%d",var2.ptr->num); 
    return 0;
}