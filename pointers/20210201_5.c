/* Задача 5. Рекурсивна функция */

#include <stdio.h>

int RecursiveFun(int nA, int nB){
    int nValue = 1;
    if (nA > 1 && nB > 1)
    {
        nValue += RecursiveFun(nA - 1, nB - 1); /* намаля всяко от числата с 1 всеки път */
    } /* сумира числата, докато и двете са по-големи от 1 */
    return (nA + nB + nValue);
}
int main()
{
    printf("RecursiveFun: %d\n", RecursiveFun(5, 7));
}