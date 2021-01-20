#include <stdio.h>
int main()
{
    int nValue = 0; /* вкъщи въведете числото със scanf */
    scanf("%d", &nValue);
    if (nValue < 10)
    {
        printf("Value is less than 10\n");
    }
    else if (nValue < 20)
    {
        printf("Value is less than 20\n");
    }
    else
    {
        printf("Value is bigger or equal than 20\n");
    }
    return 0;
}
