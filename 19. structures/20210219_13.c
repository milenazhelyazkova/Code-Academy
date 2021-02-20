/*
Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник
*/
#include <stdio.h>

struct emploee
{
    int num;
    char name[20];
    char surname[20];
    char family[20];
    char position[20];
    float experiance;
    int salary;
    struct emploee *manager;

} s[3];

int main()
{
    int i;
    
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter Employee-%d details", i + 1);
        printf("\n--------------------------\n");
        printf("Enter Number  : ");
        scanf("%d", &s[i].num);
        printf("name          : ");
        scanf("%s", s[i].name);
        printf("surname       : ");
        scanf("%s", s[i].surname);
        printf("family        : ");
        scanf("%s", s[i].family);
        printf("position      : ");
        scanf("%s", s[i].position);
        printf("experiance    : ");
        scanf("%f", &s[i].experiance);
        printf("salary        : ");
        scanf("%d", &s[i].salary);
    }
    return 0;
}
