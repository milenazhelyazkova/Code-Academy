/* 
Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.
*/
#include <stdio.h>
void sort ( int a[], int n){
    int i, j, temp;
    for ( i = 0; i < n - 1; ++i )
        for ( j = i + 1; j < n; ++j )
            if ( a[i] > a[j] ) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
int main(){
    int a[5] = {1,4,3,5,2};
    sort(a,5);
    for(int i=0;i<5;i++)
        printf("%d, ", a[i]);
    return 0;
}