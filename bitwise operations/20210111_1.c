#include <stdio.h>
int main(){

int a, b, res;
a=5;
b=3;
res=a&b;
printf("%d", res);
res = a|b;
printf("\n%d", res);
res = a^b;
printf("\n%d", res);

 return 0;
}