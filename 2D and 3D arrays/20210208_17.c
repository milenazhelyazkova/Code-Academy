/*
Задача 16. Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана.

*/
#include <stdio.h>

int main(){
   int i;
   int c[5];
   int a[5] = {1,2,3,4,5};
   int b[5] = {10,20,30,40,50};
   if(sizeof(a)!=sizeof(b))
      printf("You can not multuply different size arrays");
   for (i=0; i<5; i++)
      c[i] = a[i]*b[i];
   for(i=0;i<5;i++)
      printf("%d ", c[i]);
    return 0;
}