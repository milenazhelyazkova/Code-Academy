/* 
Задача 5.
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.
*/
#include <stdio.h>
#include <stdlib.h>
#define COOLS 5

void inputMatrix(int matrix[][COOLS], int rows, int cols);

int main(){
    
    int a[5][5];
    int numberOfelements = 5*5;
    inputMatrix(a,5,5);
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            if(*(*(a + i) + j) >= 1 && *(*(a + i) + j) <= 5)
                printf("\na[%d][%d]= %d", i, j, a[i][j]);
    }
}

void inputMatrix(int matrix[][COOLS], int rows, int cols){
    int *p;
    for (p=&matrix[0][0]; p<=&matrix[rows-1][cols-1]; p++){
        *p = rand() % 10+1; /* from 1 to 10 */
        printf("%d, ", *p); /*prints all the elements */
    }
}
