/*
Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.
*/

#include <stdio.h>

int linSearch(int a[], int l, int d);

int main(){
    int Array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int seached = 7;
    int l = sizeof(Array)/sizeof Array[0];
    printf("%d",linSearch(Array, l, seached));
}
int linSearch(int a[], int l, int d){
    int isFound=0;
    int i=0;
    for (i; i<=l; i++){
        if(a[i]==d){
            isFound = 1;
            return i;
        }
    }    
    if(isFound == 0)
        return -1;
}