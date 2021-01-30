/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл..*/

#include<stdio.h>
#include "f.h"

int main(){
  
  function3();
  return 0;
}
double function1(double a, double b){
  return a+b;
}
double function2(){
  double a;
  double b;
  printf("\nPlease enter a digit a= ");
  scanf("%lf", &a);
  printf("\nPlease enter a dogit b= ");
  scanf("%lf", &b);
  double result = function1(a, b);
  return result;
}
double function3(){
  double c;
  printf("Please enter a digit c= ");
  scanf("%lf", &c);
  double final = function2() * c;
  return printf("\nThe result of (a+b)*c = %lf", final);
}
