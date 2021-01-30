/*Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата.*/
#include<stdio.h>

extern float const PI;
float fCircle(float r);

int main(){
  printf("The Area of cicle with radius r = 2.3 is: a = Pi * r * r = %f\n", fCircle(2.3));
  return 0;
}
float const PI= 3.14159;

float fCircle(float r){
  return PI * r * r; 
}
