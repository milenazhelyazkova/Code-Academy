/*
КЗадача 12. Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef.
*/
#include <stdio.h>
#include <stdlib.h>
#define EMPLOOEES 2

typedef struct emploee
{
    int num;
    char *name;
    char *surname;
    char *family;
    char *position;
    float experiance;
    int salary;
    struct emploee *manager;

}emploee;
emploee *emp;
void inputemp(int i,emploee *emp);
void inputman(int i,emploee *emp);
void printEmpl(int i,emploee *emp);
void printMan(int i, emploee *emp);

int main()
{
    emploee *emp;
    emp=NULL;
    emp=malloc(EMPLOOEES*sizeof(emploee));
    
    int i;
    for (i = 0; i < EMPLOOEES; i++)
        inputemp(i,emp);
    
    for(i=0; i< EMPLOOEES; i++){
        emp[i].manager = &emp[i];
        inputman(i,emp);
    }
    for (int i = 0; i < EMPLOOEES; i++){
        printEmpl(i,emp);
        printMan(i,emp);
    }
    free(emp);
    return 0;
}
void inputemp(int i,emploee *emp){
    printf("\nEnter Employee-%d details", i + 1);
    printf("\n--------------------------\n");
    printf("Enter Number  : ");
    scanf("%d", &emp[i].num);
    printf("name          : ");
    scanf("%s", &emp[i].name);
    printf("surname       : ");
    scanf("%s", &emp[i].surname);
    printf("family        : ");
    scanf("%s", &emp[i].family);
    printf("position      : ");
    scanf("%s", &emp[i].position);
    printf("experiance    : ");
    scanf("%f", &emp[i].experiance);
    printf("salary        : ");
    scanf("%d", &emp[i].salary);
}
void inputman(int i,emploee *emp){
    printf("\nEnter Manager of Employee-%d details", i + 1);
    printf("\n--------------------------\n");
    printf("Enter Number  : ");
    scanf("%d", &emp[i].manager->num);
    printf("name          : ");
    scanf("%s", &emp[i].manager->name);
    printf("surname       : ");
    scanf("%s", &emp[i].manager->surname);
    printf("family        : ");
    scanf("%s",&emp[i].manager->family);
    printf("position      : ");
    scanf("%s", &emp[i].manager->position);
    printf("experiance    : ");
    scanf("%f", &emp[i].manager->experiance);
    printf("salary        : ");
    scanf("%d", &emp[i].manager->salary);
}
void printEmpl(int i, emploee *emp){
    printf("\nEmployee-%d details", i + 1);
    printf("\n--------------------------\n");
    printf("\nNumber    :  %d", emp[i].num);
    printf("\nName      :  %s", &emp[i].name);
    printf("\nSurname   :  %s", &emp[i].surname);
    printf("\nFamily    :  %s", &emp[i].family);
    printf("\nPosition  :  %s", &emp[i].position);
    printf("\nExperiance:  %.2f", emp[i].experiance);
    printf("\nSalary    :  %d", emp[i].salary);

}
void printMan(int i, emploee *emp){
    printf("\n\nManager of employee-%d details", i + 1);
    printf("\n--------------------------\n");
    printf("\nNumber    :  %d", emp[i].manager->num);
    printf("\nName      :  %s", &emp[i].manager->name);
    printf("\nSurname   :  %s", &emp[i].manager->surname);
    printf("\nFamily    :  %s", &emp[i].manager->family);
    printf("\nPosition  :  %s", &emp[i].manager->position);
    printf("\nExperiance:  %.2f", emp[i].manager->experiance);
    printf("\nSalary    :  %d", emp[i].manager->salary);
}
