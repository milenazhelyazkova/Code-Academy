/*Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.*/

#include <stdio.h>

double triangle(double z, double y);
double quadrilateral(double x, double p);

int main()
{
    double a;
    double b;
    printf("\nPlease enter a digit a= ");
    scanf("%lf", &a);
    printf("\nPlease enter a dogit b= ");
    scanf("%lf", &b);
    printf("The trianle area is: A=(a*b)/2 = %lf", triangle(a,b));
    printf("\nThe quadrital area is: A = a*b = %lf", quadrilateral(a,b));

    return 0;
}
double triangle(double z, double y){    
    return (z * y) / 2;
}
double quadrilateral(double x, double p){
    double result = triangle(x,p) * 2;
    return result;
}
