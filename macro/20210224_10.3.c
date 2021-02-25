/*
Задача 10.
Напишете функциите като макроси:
3. Напишете функцията повдигане на степен, която повдига х на степен у
*/
#include <stdio.h>
#include <math.h>
#define POWER while((y) != 0){\
                    result *= (x);\
                    (y)=(y)-1;\
                }
               
int main() {
    double result=1;
    double x=5,y=2;
    POWER;
    printf("%.2f", result);
    return 0;
}