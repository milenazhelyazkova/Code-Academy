/*
Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.
*/
#include <stdio.h>
#include <string.h>

union test{
    int x;
    int y;
    char symbol;
};
int main(){
    union test new;
    new.symbol = 'c';
    printf("symbol of new is: %c",new.symbol);
    new.x = -7;
    printf("\nx of new is:      %d",new.x);
    new.y = 10;
    printf("\ny of new is:      %d",new.y);
    union test new2 = {-7, 10, 'c'};
    printf("\nnew2 x = %d, y = %d, symbol = %c", new2.x, new2.y, new2.symbol); /* new2 x = -7, y = -7, symbol = ∙ */
    return 0;
}