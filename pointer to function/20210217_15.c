/*
Задача 15.
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).
*/

#include <stdio.h>
#include <stdlib.h>

void Toto3of35(int *toto){
    int i=0;
    for(i;i<5;i++)
        toto[i] = 1+ (rand() % 35);
        
}
void Toto6of42(int *toto){
    int i=0;
    for(i;i<6;i++)
        toto[i] = 1+ (rand() % 42);
}
void Toto6of49(int *toto){
    int i=0;
    for(i;i<6;i++)
        toto[i] = 1+ (rand() % 49);
}
int main(){
    int numbers5[5] = {0};
    int numbers6[6]= {0};
    int choice;
    void (*ptr[3])(int *) = {Toto3of35, Toto6of42, Toto6of49};
    printf("enter youur choice 0 for Toto 3 of 35, 1 for Toto 6 of 42, 2 for Toto 6 of 49\n");
    scanf("%d", &choice);
    if(choice == 0){
        ptr[choice](numbers5);
        for(int i=0;i<5;i++)
            printf("%d, ",numbers5[i]);
    }
    else
    {
        ptr[choice](numbers6);
        for(int i=0;i<6;i++)
            printf("%d, ",numbers6[i]);
    }
    
    return 0;
}