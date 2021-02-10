/* 
Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.

която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.
*/

#include <stdio.h>

int linSearch(int a[], int n, int key);

int main(){
    int Array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int seached = 5;
    int l = sizeof(Array)/sizeof Array[0];
    printf("%d",linSearch(Array, l, seached));
}
int linSearch(int a[], int n, int key){
    int isFound=0;
    int *p=a;
    int count = 0;
    for (p; p<a+n-1; p++){
        if(*p==key){
            isFound = 1;
            return count;
        }
        count +=1;
    }    
    if(isFound == 0)
        return -1;
}
