/*
Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
enum Type {INT, STR};
union Value
{
    int x;
    char s[32];
};
union Value changeValue(enum Type type, union Value *pValue)
{
    union Value changed;
    if (INT == type)
    {
        sprintf(changed.s, "'%d'" , pValue->x);
       /* char buf[32];
        itoa(pValue->x, buf,10);
        changed.s = buf; */
    }
    else if (STR == type)
    {
        changed.x = atoi(pValue->s);
    }
    return changed;
}
int main()
{
    union Value value;
    union Value changed;
    value.x = 12345;
    changed = changeValue(INT, &value);
    printf("value x is: %d\nchanged x is: %s", value.x, changed.s);

    strcpy(value.s, "test");
    changed=changeValue(STR, &value);
    printf("\nvalue s is: %s\nchanged s is: %d", value.s, changed.x);
    return 0;
}