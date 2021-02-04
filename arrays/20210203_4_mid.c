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

    int main()
    {
 
        int array[20];
        int i, check, size;
 
        printf("Enter the size of an array\n");
        scanf("%d", &size);
        printf("Enter the array elements from low to high digits\n");
        for (i = 0; i < size; i++) 
            scanf("%d", &array[i]);
        printf("Enter the digit you serch for\n");
        scanf("%d", &check);
        printf("a[i] = %d", binarySearch(array, size, check));
    }
    int binarySearch(int a[], int n, int x){
        int low, mid, high;
        low = 0;
        high = (n - 1);
        while (low <= high) 
        {
            mid = (low + high) / 2;
 
            if (x == a[mid]) 
            {
                return mid;
            }
 
            if (x < a[mid])
                high = mid - 1;
 
            else
                low = mid + 1;
 
        }
 
        return -1;
 
    }