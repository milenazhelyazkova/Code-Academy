/*
Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};
*/
#include <stdio.h>
#pragma pack(1)

union bit{
    unsigned short int x:6;
    char symbol:6;
};

int main(){
    union bit var = {32};
     printf("var x is: %u\nvar symbol is: %c", var.x, var.symbol);
   /* var.x = 7;
    printf("Size of union bit is: %d", sizeof(var));
    printf("\nvar x is: %u", var.x);
    var.symbol = 'c';
    printf("\nvar symbol is: %c", var.symbol); */
    return 0;
}