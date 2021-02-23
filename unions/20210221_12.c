/*
Задача 12.
Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1).
*/
#include <stdio.h>
#pragma pack(1)

struct bit{
    unsigned short int x:3;
    char symbol:6;
};

int main(){
    struct bit var = {7,'c'};
    printf("Size of sctuct bit is: %d", sizeof(var));
    printf("\nvar x is: %u\nvar symbol is: %c", var.x, var.symbol);
    return 0;
}