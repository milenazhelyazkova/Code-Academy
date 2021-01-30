/*Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него.
*/

#include <stdio.h>
#include <math.h>
#include "20210129_10.h"

int main(){

  leastCommonMultiple();
  printf("\nEnter a positive or negative number = ");
  double number;
  scanf("%lf", &number);
  printf("%lf\n",squareRoot(number));
  if (squareRoot(number) == -1){
    printf("Eroor it is not possilbe to find the square root of negative number\n");
    printf("The absolute value of %lf is |%lf|\n",number, absolute(number));
    number = absolute(number);
    printf("The square root of %lf is %lf",number, squareRoot(number));
  }
  return 0;
}
int leastCommonMultiple(){
    int a, b, max;
    printf("Enter first positive integer a = ");
    scanf("%d", &a);
    printf("\nEnter second positive integer b = ");
    scanf("%d", &b);
    max = (a > b) ? a : b; /* maximum number between a and a is stored in max */
    while (1){
        if (max % a == 0 && max % b == 0) /* if the max number is devided without e reminder bnumber a and b then this is the LCM */
            break;
        ++max;
    }
    return printf("\nThe Least Comman Multiple is %d.\n", max);
}
double absolute(double a){
    return a * -1;
}
double squareRoot(double number){
  double squareRoot;
  if (number < 0)
    return -1;
  squareRoot = sqrt(number);
  return squareRoot;
}