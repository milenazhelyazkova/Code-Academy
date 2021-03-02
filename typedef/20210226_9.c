/*Задача 9. Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова
*/
#include <stdio.h>
int main(){
    int a = 25;
    int b = 5;
    double res = 0.0;
    res = (double)a / b;
    printf("Value of res: %lf, a/b: %lf\n",
           res, a / b);
    return 0;
}