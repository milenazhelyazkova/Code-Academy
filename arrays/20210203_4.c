/*
Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.
*/

#include <stdio.h>
int binarySearch(int a[], int n, int x);

int main(){
    int Array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int seached =3; /* try 33 for example */
    int l = sizeof(Array)/sizeof Array[0];
    printf("%d",binarySearch(Array, l, seached));
}
int binarySearch(int a[], int n, int x){
    int isFound = 0;
    int i=n/2; /* the middle is i */
    if(x>a[i]){
        for (i; i<=n; i++)
            if(a[i]==x){
                isFound = 1;
                return i;
            }
    }    
    else{
        for (i; i>=0; i--)
            if(a[i]==x){
                isFound = 1;
                return i;
            }
    }    
    if(isFound == 0)
        return -1;
}