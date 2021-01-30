/*Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични*/

#include<stdio.h>

void convert(int num);

int main(){
  int num;
  printf("Pleace enter a decimal number.\n");
  scanf("%d", &num);
  convert(num);
  return 0;
}
void convert(int num){
  int i;
  for (i = 1 << 7; i > 0; i >>= 1){
    if (num & i)
      printf("1");
    else
      printf("0");
  }
}