/*
Задача 2. Инициализиране на структура, вложени структури
*/
#include <stdio.h>
#include <string.h>


struct Detail{
    unsigned AcadId;
    char AcadName[BUFSIZ];
    char AcadUrl[BUFSIZ];
};
struct Cadet{
    unsigned CadetId;
    char CadetName[BUFSIZ];
    float AverageRating;
    struct Detail detail;
};
int main()
{
    struct Cadet cadet = {1, "Ivan Ivanov", 5.52, {13, "Code Academy", "https://codeacademy.bg"}};
    printf("Cadet Id is: %d\n", cadet.CadetId);
    printf("Name is: %s\n", cadet.CadetName);
    printf("Rating (2-6) is: %f\n", cadet.AverageRating);
    printf("Academy Id is: %d\n", cadet.detail.AcadId);
    printf("Name is: %s\n", cadet.detail.AcadName);
    printf("URL is: %s\n", cadet.detail.AcadUrl);
    struct Cadet cadet2 = {2, "Milena Zhelyazkova", 4.52, {17, "Code Academy", "https://codeacademy.bg"}};
    printf("Cadet Id is: %d\n", cadet2.CadetId);
    printf("Name is: %s\n", cadet2.CadetName);
    printf("Rating (2-6) is: %f\n", cadet2.AverageRating);
    printf("Academy Id is: %d\n", cadet2.detail.AcadId);
    printf("Name is: %s\n", cadet2.detail.AcadName);
    printf("URL is: %s\n", cadet2.detail.AcadUrl);
    return 0;
}