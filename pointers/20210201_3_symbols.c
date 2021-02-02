/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/

#include <stdio.h>

double atof(char s[]);

int main(void){
    char number[] = "wr-123.321";
   
    printf("%lf", atof(number));
    return 0;
}
double atof(char s[]){
    double n, result;
    int i = 0;
    double power = 1.0;
    int sign = 1;
    while (!(s[i] >= '0' && s[i] <= '9')){
        i++;
    }
    if(i>0 && s[i-1] == '-'){
        sign = -1;
    }
    for (i; s[i] >= '0' && s[i] <= '9'; i++)
        n = 10.0 * n + (s[i] - '0');
    if (s[i]== '.')
        i++;
    for (i; s[i] >= '0' && s[i] <= '9'; i++){
        n = 10.0 * n + (s[i] - '0');
        power *=10;
    }
    return sign * n/power;;
}   
