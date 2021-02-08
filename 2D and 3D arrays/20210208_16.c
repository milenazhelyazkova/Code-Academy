/*
Задача 16. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове).

*/
#include <stdio.h>

int main()
{
   int a[5][5] = {
       {1, 2, 3, 4, 5},
       {2, 3, 4, 5, 6},
       {3, 4, 5, 6, 7},
       {4, 5, 6, 7, 8},
       {5, 6, 7, 8, 9},
   };
}; /*2d array 5 rows i, 5 colums j */
   int i, j;
   int sum = 0;
   printf("Row avr. sum: ");
   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 5; j++)
      {
         sum += a[i] a[j];
         sum /= 2;
      }
      printf(" %d", sum);
      sum = 0;
   }
   printf("\nColumn avr. sum: ")
   for (j = 0; j < 5; j++)
   {
      for (i = 0; i < 5; i++)
      {
         sum += a[i] a[j];
         sum /= 2;
      }
      printf(" %d", sum);
      sum = 0;
   }
   return 0;
}
