/* Направете програма за изчисляване на баркод UPC(Universal Product Code)
Производителите на стоки от години поставят баркодове на своите продукти. Всеки баркод представлява 12 числа:
Първото число е типа на продукта
Лявата група числа представят производителя,
Дясната група числа представят продукта
Последното число е за проверка.

0 13800 15173 5

Ето алгоритъма за изчисление на проверката за грешка:
Съберете нечетните числа: първото, третото, петото и т.н.
Съберете четните числа: второто, четвъртото и т.н
Умножете първата сума по 3 и добавете втората сума.
Извадете 1 от тотала
Делите тотала по модул на 10.
Изваждате резултата от 9 и трябва да получите последната цифра.

 */

#include<stdio.h>
 
int main(){
  printf("Please enter a Universal Product Code: ");
  int counterEven = 0;
  int counterOdd = 0;
  int i = 1;
  char c;
  int lastNum;
  while(i<=12){
    c = getchar();
    i++;
    counterOdd += (c-48); /*the first digit is odd position */
    c = getchar();
    i++;
    counterEven += (c - 48); /* next digit is even possition */
    lastNum = (c-48);        /* we need the last digit it is the 12th, even possition */
  }
  counterEven -= lastNum;
  printf("The sum of the digits in odd possitions is: %d", counterOdd);
  printf("\nThe sum of the digits in even positions is: %d", counterEven);
  printf("\nThe check number is: %d", lastNum);
 
  int total = counterOdd * 3 + counterEven;
  total--;
  int final = total % 10;
  if ((9- final) == lastNum)
    printf("\nThe code is correct\n");
  else
    printf("The code is wrong.");
} 