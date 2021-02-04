/* Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30. */

#include <stdio.h>

unsigned long long int factorial(int i);

int main(){
    printf("The factorial of 30! = %lg\n", factorial(30));
    return 0;
}
unsigned long long int factorial(int n){
    int i = 1;
    unsigned long long int result=1;
    while (i<=n){
        result *= i;
        i++;
    }
    return result;
}