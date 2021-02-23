/*
Задача 7.
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.
*/
#include <stdio.h>
#include <string.h>

union goods{
    int quantity;
    char product[128];
    float price;
};
int main(){
    union goods new;
    strcpy(new.product, "chocolate");
    printf("product name:     %s",new.product);
    new.price = 2.50;
    printf("\nproduct price:    %.2f",new.price);
    new.quantity = 50;
    printf("\nproduct quantity: %d",new.quantity);
    return 0;
}