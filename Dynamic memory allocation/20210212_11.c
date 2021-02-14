/* Задача 11. Напишете програма, в която се въвеждат пореден номер, име, фамилия, възраст на участници в маратон.
Изискването е за името и фамилията да не се използват масиви с фиксирана дължина.
След като въвеждането завърши, изведете списък с участниците. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STUDENTS 100
char *input();

int studentsNumber[STUDENTS],num = 0, students;
char *studentFirstNames[STUDENTS], *firstName;
char *studentLastNames[STUDENTS], *lastName;
int studentAges[STUDENTS];

int main()
{
    printf("Please enter number of students:  ");
    scanf("%d", &students);
    for (num = 1;num <= students;num++)
    {
        printf("Please enter student %d number:  ",num);
        scanf("%d", &studentsNumber[num]);
        printf("\nPlease enter student %d first name: ",num);
        firstName = input();
        firstName = input();
        printf("\nPlease enter student %d last name:  ",num);
        lastName = input();
        printf("Please enter student %d age:  ",num);
        scanf("%d", &studentAges[num]);
        studentFirstNames[num] = firstName;
        strcpy(studentFirstNames[num], firstName);
        studentLastNames[num] = lastName;
        strcpy(studentLastNames[num], lastName);
    }
    for (num = 1;num <= students;num++)
    {
        printf("student %d, %s %s, age %d, number %d\n",num, studentFirstNames[num], studentLastNames[num], studentAges[num], studentsNumber[num]);
        free(studentFirstNames[num]);
        free(studentLastNames[num]);
    }
    return 0;
}
char *input()
{
    int c, i=0;
    unsigned int size=6;
    char *name = (char*) malloc(size * sizeof(char));
    while ((c= getchar())!= '\n'){
        if( i == size-1){ /*to leave 1 place for '\0' */
            size= size*2;
            name = (char*) realloc(name, (size) * sizeof(char)); 
        }
        name[i++] = c;
    }
    name[i] = '\0';
    return name;
}