/*Задача 4. Напишете функция, която връща резултат a*2 + b*c.*/

#include<stdio.h>

double calculation(void);

int main(){

  calculation();
  return 0;
}
double calculation(void){
  double a;
  double b;
  double c;
  printf("Please enter digit a = ");
  scanf("%lf", &a);
  printf("\nPlease enter a digit b = ");
  scanf("%lf", &b);
  printf("\nPlease enter a digit c = ");
  scanf("%lf", &c);
  double result = a*2 + b*c;
  return printf("\nThe result = a*2 + b*c = %lf", result);
}
  
    