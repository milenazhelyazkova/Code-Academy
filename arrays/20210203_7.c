/*
Задача 7. Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? Какво представлява името на масива? Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях?
 */
#include <stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10}; /* Какво представлява името на масива? отг: поинтер към адреса на първият елемент от масива */
    int *ptr = a; /* Нужно ли е да използвате &? отговор: НЕ */
    printf("%d", *ptr);
    return 0;
}
/*Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях? int *p;
                          p = &a[0]; e същото като p = a; */