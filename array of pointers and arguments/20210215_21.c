/*
Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort. 
*/ 
#include <stdio.h>
#include <string.h>
void quicksort(char *a,int first,int last)
{
   int i, j, pivot;
   char temp;
 
   if(first<last){
      pivot=first;
      i=first;
      j=last;
 
      while(i<j){
         while(a[i]<=a[pivot] && i<last)
            i++;
         while(a[j]>a[pivot])
            j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quicksort(a,first,j-1);
      quicksort(a,j+1,last);
   }
}
 
int main()
{
    int i, n;
    char a[]= "AZMBULDK";
    n = strlen(a);
    printf("Insorted array: %s\n", a);
    quicksort(a,0,n-1);
    printf("Sorted array:   %s", a);
 
   return 0;
}
