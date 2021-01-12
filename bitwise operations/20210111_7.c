#include<stdio.h>

int main(){

int a, result;
a = 15;
result = a&0xAAAAAAAA; // ако ползваме 32 битово число
printf("%d", result);
 return 0;
}
