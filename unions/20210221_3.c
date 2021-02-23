/*
Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
*/
#include <stdio.h>
#include <string.h>

struct goods{
    int quantity;
    char product[128];
    float price;
};
int main(){
    struct goods new; /*дефинираме нова променлива*/
    new.quantity = 50;
    strcpy(new.product, "chocolate");
    new.price = 2.50;
    printf("product name:     %s\nproduct price:    %.2f\nproduct quantity: %d", new.product, new.price, new.quantity);
    return 0;
}