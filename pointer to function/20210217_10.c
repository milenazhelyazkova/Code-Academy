/* 
Задача 10.
Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3.
*/
#include <stdio.h>

int isPrime(int n);

int main(){
    int i=0,j=0;
    int Numbers[1001] = {0}; /*numbers form 0 to 1000, indexes from 0 to 1000*/
    int primeNumbers[1001];
    for(i; i<1001;i++){
        Numbers[i] = i; /* full the numbers from 0 to 1000 in the array */
        if(isPrime(Numbers[i])==1){ /* check if number is prime */
            primeNumbers[j] = Numbers[i]; /* if prime, store in another array with only prime numbers*/
            printf("%d, ",primeNumbers[j]);
            j++;
        }
    }
    return 0;
}
int isPrime(int n) {
    int i, flag = 1;
    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (n== 0 || n == 1) { /* prime number is bigger than 1 */
        flag = 0;
    }
    else {
        if (flag == 1)
            return 1;
        else
            return 0;
    }
}