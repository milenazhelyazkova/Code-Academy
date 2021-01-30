/*Задача 4. Напишете функция, която връща резултат a*2 + b*c.*/
#include<stdio.h>

double calculation(double a, double b, double c);

int main(){
    double a;
    double b;
    double c;
    printf("Please enter digit a = ");
    scanf("%lf", &a);
    printf("\nPlease enter a digit b = ");
    scanf("%lf", &b);
    printf("\nPlease enter a digit c = ");
    scanf("%lf", &c);
    double result = calculation(a, b, c);
    printf("\nThe result = a*2 + b*c = %lf", result);
    return 0;
}
double calculation(double a, double b, double c){
        return a*2 + b*c;
}