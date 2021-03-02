/*
Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.
*/
#include <stdio.h>
#include <string.h>

typedef struct key{
        int num;
        char *keyWord;
    }key_t;

int main(){
    key_t keytab[] ={{1,"auto"},{2,"break"}, {3,"case"},{4,"char"},{5,"const"},{6,"continue"},{7,"default"},\
    {8,"do"},{9,"double"},{10,"else"},{11,"enum"},{12,"extern"},{13,"float"},{14,"for"},{15,"goto"},{16,"if"},\
    {17,"int"},{18,"long"},{19,"register"},{20,"return"},{21,"short"},{22,"signed"},{23,"sizeof"},
    {24,"static"},{25,"struct"},{26,"switch"},{27,"typedef"},{28,"union"},{29,"unsigned"},{30,"void"},\
    {31,"volatile"},{32,"while"}};
   for(int i=0;i<32;i++)
    printf("\n%d %s",keytab[i].num,keytab[i].keyWord);

}