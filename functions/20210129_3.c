/*Задача 3. Напишете функция, която връща резултат (а+в)*4.*/

#include<stdio.h>

double calculation(double a, double b);

int main(){
    double a;
    double b;
    printf("Please enter digit a = ");
    scanf("%lf", &a);
    printf("\nPlease enter a digit b = ");
    scanf("%lf", &b);
    double result = calculation(a, b);
    printf("\nThe result = (a+b)*4 = %lf", result);
    return 0;
}
double calculation(double a, double b){
        return (a+b)*4;
}
    
  
