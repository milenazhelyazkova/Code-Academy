/* Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30,  но е рекурсивна. */
#include <stdio.h>

unsigned long long int RecursiveFactorial(int n);

int main(){
    printf("The factorial of 30! = %lg\n", RecursiveFactorial(30));
    return 0;
}
unsigned long long int RecursiveFactorial(int n){
    if (n == 1)
        return 1;
    else
        return n * RecursiveFactorial(n - 1);
}