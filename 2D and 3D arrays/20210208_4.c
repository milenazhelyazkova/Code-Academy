/*
Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float
*/
#include <stdio.h>

double midArray(int a[], int N);

int main(){
   int n, i;
   printf("Enter number of elements for the array: ");
   scanf("%d", &n);
   int a[n];
   for (i=0; i<n; i++){
        printf("Enter value for a[%d]:", i);
        scanf("%d", &a[i]);
   } 
   for (i=0; i < n; i++)
      printf("%d, ", a[i]);
   printf("\nThe avvarage value of the elements in your array is: %f", midArray(a,n));
   return 0;
}
double midArray(int a[], int N){ 
   double sum = 0.0;
   for(int i=0; i<N; i++)
      sum +=a[i];
   return sum /= N;
}
/* with pointers: 
int sum=0, *p;
for(p = a; p<=a+N-1;p++) /p=&a[0], p<= &a[N-1] (if we have 5 elements their indixes are from 0 to 4)
    sum += *p
return sum /= N */