/*Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/

#include<stdio.h>


void isEvenOrOdd();

int main(){

  isEvenOrOdd();
  return 0;
}
void isEvenOrOdd(){
  int number;
  printf("Please enter an integer number:\n"); /* only integer number can be checked*/
  scanf("%i", &number);
    if(number % 2 == 0)
      printf("The number is even.\n");
    else
      printf("The number is odd.");
}