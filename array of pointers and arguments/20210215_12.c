/*
Задача 12.
Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.
*/

#include <stdio.h>
#include <stdlib.h>

int a[10][10][10];
float sum = 0.0;
int numberOfelements = 10*10*10;
float arithmeticMean;
float matrix();

int main(){
   
    printf("\nAritmetic Mean = sum of all elements / number of elements = %f / %d = %f", sum, numberOfelements, matrix());  
    printf("\nAritmetic Mean = sum of all elements / number of elements = %f / %d = %f", sum, numberOfelements, matrix());
    
    return 0;
}
float matrix(){
    int *p;
    for (p=&a[0][0][0]; p<=&a[9][9][9]; p++){
        *p = rand() % 10; /* from 0 to 9 */
      /*  printf("%d, ", *p); prints all the elements */
        
        sum += *p;
        arithmeticMean = sum / numberOfelements;
    } 
    return arithmeticMean;
}