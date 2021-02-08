/*
Задача 13. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.
*/
#include <stdio.h>

int main()
{
    int a[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}; /* 5 rows i, 5 colums j */
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Two Dimensional array elements:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
            if (j == 4)
                printf("\n");
        }
    }
    return 0;
}
/* with pointers:
for(p=a;p<=*(a+4)+4;p++); //p=&a[0][0], *(a+4)+4 = &a[4][4]  = &a[row-1][col-1]
    printf("%d", *p);
for(p=a;p<=*(a+4)+4;p++)
    printf("%d", **p);
*/