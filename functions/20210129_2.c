/*Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата:*/
#include<stdio.h>

const float PI = 3.14159;
double Circle(double R);
double area();

int main(){
  area();
  return 0;
}
double Circle(double R){
  return PI * R * R;
}
double area(){
  double R;
  printf("Please enter a radius:\n");
  scanf("%lf", &R);
  return printf("The area of a circle with R = %lf is: A = %lf", R, Circle(R));
}