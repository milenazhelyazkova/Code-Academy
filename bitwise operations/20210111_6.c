#include<stdio.h>

int main(){

int a, pos, result;
a = 15;
pos = 5;
result = a^(0x1<<pos);
printf("%d", result);
 return 0;
}
