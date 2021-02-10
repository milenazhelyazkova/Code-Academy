/* 
Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}
*/
#include <stdio.h>

int sum_array(int a[], int n)
{
    int sum = 0;
    int *p;
    for (p = a; p < a+n; p++)
        sum += *p;
    return sum;
}
int main(){
    int a[5] = {1,2,3,4,5};
    printf("%d",sum_array(a,5));
    return 0;
}