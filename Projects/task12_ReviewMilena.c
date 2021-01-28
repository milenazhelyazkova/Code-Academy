/*
Напишете функция htoi(s), която преобразува низ от шестнадесетични цифри в
еквивалентна целочислена стойност. Възможните цифри са между 0 и 9,
от а до f и от А до F.
*/
 
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

unsigned long htoi(char s[]);
int menu(int choice);

int main()
{
    menu(1);

    return 0;
}
int menu (int choice){
    while(choice != 0){
        char s[10];
        printf("Please enter a Hexidesimal which you want to convert to a Decimalnumber: 0x");
        scanf("%s", &s);
        htoi(s);
        

        while (1){
        
            printf("If you want to continue press 1.\nIf you want to exit press 0.\n");
            choice = 0;
            scanf("%d", &choice);
        
            if (choice == 1){
                htoi;
                break;
            }
            else if (choice == 0)
                break;
            else
                printf("Invalid input.\n");
        }
    }
}
unsigned long htoi(char s[])
{

    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = toupper(s[i]);
        if (!(s[i] >= '0' && s[i] <= '9') && !(s[i] >= 'A' && s[i] <= 'F'))
        {
            printf("Invalid input\n");
            return 0;
        }
    }
    unsigned long long result = strtol(s, NULL, 16);
    printf("Hex: %s\nDec: %ld\n", s, result);
}