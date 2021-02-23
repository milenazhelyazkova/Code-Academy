/*
Задача 2. Структура от обединение и описател
*/
#include <stdio.h>
#include <string.h>
    /* value description */
enum Type { INT, STR };
union Var
{
    int n;
    char s[64];
};
struct Value
{
    enum Type type;
    union Var var;
};
void printValue(struct Value *pValue)
{
    if (INT == pValue->type)
    {
        printf("INT: %d\n", pValue->var.n);
    }
    else if (STR == pValue->type)
    {
        printf("STR: %s\n", pValue->var.s);
    }
}
int main()
{
    struct Value value = {INT, 12345};
    printValue(&value);
    value.type = STR;
    strcpy(value.var.s, "test test test");
    printValue(&value);
    return 0;
}