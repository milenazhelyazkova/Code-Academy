/*
7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината. 

*/

#include <stdio.h>

extern int days[12];
void choiceDate();
int checkMonth(int *month);
int checkDay(int year, int month, int *day);
int dayNumber(int year, int month, int day);

int main(){
  
   choiceDate();
   
   return 0;
}
void choiceDate(){
   int year, month, day;
   printf("Please enter an year you want to check: ");
   scanf("%d", &year);
   printf("\nPleace enter a month(as a number from 1 to 12): ");
   scanf("%d", &month);
   checkMonth(&month);
   printf("\nPleace enter a day: ");
   scanf("%d", &day);
   checkDay(year, month,&day);
   
   printf("\n%dth/%d/%d, is the %dth day of the year", day, month, year, dayNumber(year,month,day));
}
int checkMonth(int *month){
   if(*month<1 || *month>12){
      int month2;
      printf("The month must be between 1 and 12");
      printf("\nPleace enter a month(as a number from 1 to 12): ");
      scanf("%d", &month2);
      *month = month2;
      return *month;
   }
}
int checkDay(int year, int month, int *day){
   if(month == 1 || month == 3 || month == 5 || month == 7 || month==8 || month==10 || month==12)
      if(*day<1 || *day>31){
         int day2;
         printf("the day shouldbe between 1 and 31");
         printf("\nPleace enter a day: ");
         scanf("%d", &day2);
         *day = day2;
         return *day;
      }
   if(month == 4 || month==6 || month==9 ||month==11)
       if(*day<1 || *day>30){
         int day2;
         printf("the day shouldbe between 1 and 30");
         printf("\nPleace enter a day: ");
         scanf("%d", &day2);
         *day = day2;
         return *day;
       }
   if(month==2){
      if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
         if(*day<1 || *day>29){
            int day2;
            printf("the day shouldbe between 1 and 29");
            printf("\nPleace enter a day: ");
            scanf("%d", &day2);
            *day = day2;
            return *day;
         }
      }
      else
         if(*day<1 || *day>28){
            int day2;
            printf("the day shouldbe between 1 and 28");
            printf("\nPleace enter a day: ");
            scanf("%d", &day2);
            *day = day2;
            return *day;
         }
   }

}
int dayNumber(int year, int month, int day){
   if (month>2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
         ++day;
   while (month-- > 0)
        day += days[month - 1]; 
   return day;
} 
int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
