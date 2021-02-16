/*
Задача 9. Дефинирайте и инициализирайте променлива „а“.
Пойнтер към пойнтер към променлива.
Дефинирайте и инициализирайте пойнтер към нея.
Дефинирайте и инициализирайте пойнтер към първия пойнтер. Задайте
стойност на втория пойнтер 15.
Колко е стойността на променливата „а“?
Вземете бележката от масата, на нея пише в кое чекмедже (на скрина)
ще намерите бележката, на която пише къде е палтото (в гардероба);
Обърнете внимание на броя на звездичките!
*/

#include <stdio.h>
int main(){
    int a = 5;
    int *p = &a;
    int **pp = &p;
    **pp = 15;
    printf("Value of a: %d\n", a); /* 15 */
    printf("Address of a: %p\n", &a); /* 000000000061FE1C */
    printf("Value ot which address is pointing p: %d\n", *p); /* 15 */
    printf("Address saved in p (address of a): %p\n", p); /* 000000000061FE1C */
    printf("Address of p: %p\n", &p); /* 000000000061FE10 */
    printf("Value ot which address is pointing *pp(p=&a; *p=*(&a)=a; pp = &p; **pp =*(*(pp))=**&p=*p=*(&a)=a: %d\n", **pp); /* 15 */
    printf("Value to which adress is pointing pp(pp is pointing to p, value saved in p is adress of a): %p\n", *pp); /* 000000000061FE1C */
    printf("Address saved in pp (address of p): %p\n", pp); /* 000000000061FE10 */
    printf("Address of pp: %p\n", &pp); /* 000000000061FE08 */
    return 0;
}
