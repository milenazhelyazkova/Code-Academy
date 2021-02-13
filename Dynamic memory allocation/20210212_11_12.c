#include<stdio.h>
#include<string.h>
struct stud
{
     char name[50];
     char family[50];
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
          printf("\n--------------------------\n");
          printf("Enter Name    : ");
          scanf("%s",s[i].name);
          printf("family        : ");
          scanf("%s",s[i].family);
          printf("age           : ");
          scanf("%d",&s[i].age);
          printf("number        : ");
          scanf("%d",&s[i].number);
     }
     printf("\n\tData before rearrangement");
     printf("\n-----------------------------------\n");
     printf("Name\t  Family\t Age\t  Number\n");
     printf("--------------------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("\n%-10s %3s\t3%d\t%5d",s[i].name,s[i].family,s[i].age,s[i].number);
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