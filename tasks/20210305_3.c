/*
Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.
*/
#include <stdio.h>
#include <stdlib.h>

float tempDiff(int heigh1, int height2);

int main(){

    float temp1=0.0;
    int heigh1=0; // 2918 vihten
    int heigh2=0; // 1950 hut
    
    printf("\nEnter temperature you know in Celcius: ");
    scanf("%f", &temp1);
    printf("\nEnter heigh1 which temp you know in meters: ");
    scanf("%d", &heigh1);
    printf("\nEnter heigh2 which temp you want to know in meters: ");
    scanf("%d", &heigh2);
    
    float tempSearched = temp1 + tempDiff(heigh1, heigh2);
    printf("\ntemperature calculated %.2f", tempSearched);

    return 0;
    
}
float tempDiff(int heigh1, int heigh2){

    int heigh = heigh1 - heigh2;
    float diff = (heigh/100) *0.5;
    printf("\ntemperature difference %.2f", diff);

    return diff;
}