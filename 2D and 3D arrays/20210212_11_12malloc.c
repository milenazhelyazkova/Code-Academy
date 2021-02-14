#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char *inputName();
char *inputFamily();

struct stud
{
     char *name;
     char *family;
     int age;
     int number;
}s[100];
int main()
{
     struct stud t;
     int i=0,j=0,n;
     printf("/*How many student records you want to enter?*/");
     printf("\n\nEnter Limit : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          
          printf("\nEnter Student-%d Details",i+1);
          s[i].name = inputName();
          s[i].name = inputName();
          s[i].family = inputFamily();
          printf("\nage           : ");
          scanf("%d",&s[i].age);
          printf("\nnumber        : ");
          scanf("%d",&s[i].number);
     }
     printf("\n\tData before rearrangement");
     printf("\n-----------------------------------\n");
     printf("Name\t  Family\t Age\t  Number\n");
     printf("--------------------------------------\n");
     for(i=0;i<n;i++)
     {
           printf("\n%-10s %3s\t%3d\t%5d",s[i].name,s[i].family,s[i].age,s[i].number);
     }
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(strcmp(s[i].name,s[j].name)>0)
               {
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
               }
          }
     }
     printf("\n\n\tData after rearrangement");
     printf("\n-----------------------------------\n");
     printf("Name\t  Family\t Age\t  Number\n");
     printf("--------------------------------------\n");
     for(i=0;i<n;i++)
     {
           printf("\n%-10s %3s\t%3d\t%5d",s[i].name,s[i].family,s[i].age,s[i].number);
     }
     return 0;
}
char *inputName()
{
    int c, i=0;
    int size=2;
    char *name = (char*) malloc(size * sizeof(char));
    printf("\nName    : ");
    while ((c= getchar())!= '\n'){
        name[i++] = c;
        if( i == size-1){ /*to leave 1 place for '\0' */
            size= size*2;
            name = (char*) realloc(name, size * sizeof(char)); 
        }
    }
    name[i] = '\0';
    return name;
}
char *inputFamily()
{
    int c, i=0;
    int size=2;
    char *family = (char*) malloc(size * sizeof(char));
    printf("\nFamily    : ");
    while ((c= getchar())!= '\n'){
        family[i++] = c;
        if( i == size-1){ /*to leave 1 place for '\0' */
            size= size*2;
            family = (char*) realloc(family, size * sizeof(char)); 
        }
    }
    family[i] = '\0';
    return family;
}