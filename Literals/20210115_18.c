/* променяме, за да не ползваме if - else,
 вместо това питаме за колко дни и колко броя каравани и/или кемпери желае клиентът*/
#include<stdio.h>

int main(){

int numberCameps = 0;
int priceCamep = 100;
int numberCaravan =0;
int priceCaravan = 90;
int daysCaravan =0;
int daysCamper = 0;

printf("Добре дошли в каравани и кемпери под наем\n");
printf("Ако желаете каравана въведете за колко дни.\n");

scanf("%i", &daysCaravan);
printf("Въведете колко каравани желаете, имаме 3 бройки.\n");

scanf("%i", &numberCaravan);
int totalCaravan = daysCaravan * numberCaravan * priceCaravan;

printf("Цената на %i каравана за %i дни ще бъде: %iлв.\n",numberCaravan, daysCaravan, totalCaravan);
printf("Ако желаете кемпер въведете за колко дни.\n");

scanf("%i", &daysCamper);

printf("Въведете колко кемпери желаете, имаме 3 бройки.\n");

scanf("%i", &numberCameps);
int totalCemper = daysCamper * numberCameps * priceCamep;
printf("Цената на %i кемпер за %i дни ще бъде: %iлв.\n", numberCameps,  daysCaravan, totalCemper);

int rez = totalCemper + totalCaravan;
printf("Общата сума ще бъде: %iлв.\n", rez);
printf("Желаете ли да продължите?");

return 0;
}
