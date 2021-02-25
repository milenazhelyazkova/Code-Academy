/*
Задача 10.
Напишете функциите като макроси:
2. функция AVG, която смята средното аритметично на числата от
определен диапазон
*/
#include <stdio.h>
#include <math.h>
#define AGV(x,y) int count=0;\
                double result;\
                for((x);(x)<=(y);(x)++){\
                    result += (x);\
                    count++;\
                }\
                result = result/count;\
               
int main() {
    int x=1,y=5;
    AGV(x,y);
    printf("%.2f", result);
    return 0;
}