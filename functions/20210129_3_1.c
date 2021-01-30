/*Задача 3. Напишете функция, която връща резултат (а+в)*4.*/

#include<stdio.h>

double calculation(void);

int main(){
  calculation();
  return 0;
}
double calculation(void){
  double a;
  double b;
  printf("Please enter digit a = ");
  scanf("%lf", &a);
  printf("\nPlease enter a digit b = ");
  scanf("%lf", &b);
  double result =  (a+b)*4;
  return printf("\nThe result = (a+b)*4 = %lf", result);
}