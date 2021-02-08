/*
Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. Следкато сте готови, направете въвеждане на данните в масива,
като четете от потребителя със scanf
*/
#include <stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    for (int i=0; i<5; i++){
        printf("Enter value for a[%d]:", i);
        scanf("%d", &a[i]);
    }  
    for (int i=0; i<5; i++)
        printf("%d, ", a[i]);
    return 0;
}
/* with pointers:
#include <stdio.h>
#define N 5
int main(){
    int a[N], *p;
    printf("Enter %d elements in an array", N);
    for(p=a;p<=a+N-1;p++) //a+n-1 = &a[N-1]
        scan("%d", p); // p = &a[0]
    for(p=a; p<=a+N-1; p++)  // revers order for(p=a+N-1; p>=a;p--)
        printf("%d", *p);
    return 0;
}
*/