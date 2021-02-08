/*
6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. 

*/
#include <stdio.h>

int maxElement(int a[], int N, int max); /* for float the function will be  double maxEllement(double a[], double max); */

int main(){
   int n, i;
   int max = 0; /* the elements are integers , if float numbert double max = 0.0 */
   printf("Enter number of elements for the array: ");
   scanf("%d", &n);
   int a[n];
   for (i=0; i<n; i++){
        printf("Enter value for a[%d]:", i);
        scanf("%d", &a[i]);
   } 
   for (i=0; i < n; i++)
      printf("%d, ", a[i]);
   printf("\nThe max value of an element in your array is: %d", maxElement(a,n,max));
   return 0;
}
int maxElement(int a[], int N, int max){ 
   for(int i=0; i<N; i++)
      if(a[i] > max)
         max = a[i];
   return max;
}
/* with pointers: 
int *p;
for(p = a; p<=a+N-1;p++) /p=&a[0], p<= &a[N-1] (if we have 5 elements their indixes are from 0 to 4)
    if(*p>max)
      max = *p;
return max */