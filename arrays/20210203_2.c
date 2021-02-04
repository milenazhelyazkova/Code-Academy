/* Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */
#include <stdio.h>

int printArr(int a[], int l);

int main(){
    int arrInt[] = {0,1,2,3,4,5,6,7,8,9};
    int len = sizeof(arrInt)/sizeof(arrInt[0]);
    printArr(arrInt, len);
    return 0;
}
int printArr(int a[], int l){
    int i=0;
    while(a[i] <= l){
        printf("The %d element in arrInt is :%d\n",i, a[i]);
        i++;
    }
}
    