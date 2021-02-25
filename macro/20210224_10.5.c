/*
Задача 10.
Напишете функциите като макроси:
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));
*/
#include <stdio.h>
#include <math.h>

#define DISP(f, x) printf("The sqrt(%g) = %g\n", (x), f(x));

int main() {
    DISP(sqrt,3.0);
    return 0;
}