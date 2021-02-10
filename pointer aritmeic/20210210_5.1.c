/* 
Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи. 
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
*/
#include <stdio.h>
void sort(int a[], int n){
    int *p, *q, temp;
    for ( p = a; p <a+ n - 1; ++p )
        for ( q = p + 1; q < a+n; ++q )
            if ( *p > *q ) {
                temp = *p;
                *p = *q;
                *q = temp;
            }
}
int main(){
    int a[5] = {1,4,3,5,2};
    sort(a,5);
    for(int i=0;i<5;i++)
        printf("%d, ", a[i]);
    return 0;
}