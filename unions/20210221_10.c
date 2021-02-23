/*
Задача 10.
Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.
*/
#include <stdio.h>
#include <string.h>
    
enum Type { INT, STR };
union Value
{
    int x;
    char s[64];
};
struct Var{
    enum Type type;
    union Value value;
    
};
void printValue(struct Var *pVar)
{
    if (INT == pVar->type)
    {
        printf("INT: %d\n", pVar->value.x);
    }
    else if (STR == pVar->type)
    {
        printf("STR: %s\n", pVar->value.s);
    }
}
int main()
{

    struct Var var = {INT, 12345};
    printValue(&var);
    var.type = STR;
    strcpy(var.value.s, "test test test");
    printValue(&var);
    return 0;
}