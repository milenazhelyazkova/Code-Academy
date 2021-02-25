/*
Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)
*/
#include <stdio.h>
/* слепва да идентификатора */
#define MY_CONCAT(x,y) x##y
int main() {
    int num = 6;
    MY_CONCAT(print,f)("This is test\nIf you read it, works %d",num);
    return 0;
} 