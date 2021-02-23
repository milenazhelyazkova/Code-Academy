/*
Задача 8.
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.
*/
#include <stdio.h>
#include <string.h>
    
enum Type {INT, STR};
union Value{
    int x;
    char s[32];
};
void printValue(enum Type type, union Value *pValue)
{
    if (INT == type)
    {
        printf("INT: %d\n", pValue->x);
    }
    else if (STR == type)
    {
        printf("STR: %s\n", pValue->s);
    }
}
int main()
{
    union Value value;
    value.x = 12345;
    printValue(INT, &value);
    strcpy(value.s, "test test test");
    printValue(STR, &value);
    return 0;
}