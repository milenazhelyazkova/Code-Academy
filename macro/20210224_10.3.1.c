/*
Задача 10.
Напишете функциите като макроси:
3. Напишете функцията повдигане на степен, която повдига х на степен у
*/
#include <stdio.h>
#include <math.h>
#define POWER(x,y)  double result=1;\
                    while((y) != 0){\
                        result *= (x);\
                        (y)=(y)-1;\
                    }
               
int main() {
    
    double x=5,y=2;
    POWER(x,y);
    printf("%.2f", result);
    return 0;
}