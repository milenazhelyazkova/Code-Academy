/* 
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1
*/
#include <stdio.h>

int fibonnacci(int);

int main(){
    int numbers;
    printf("Enter how much Fibonnacci numbers you want: ");
    scanf("%d", &numbers);
    fibonnacci(numbers);
    
}
int fibonnacci(int n){
    int i;
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    for (i = 0; i <n; i++)
        printf("%d, ", fib[i]);
}