#include <stdio.h>

int iz4istiBitna(int a, int pos);

int main(){

int a = 35;
int pos = 5;
printf("%d", iz4istiBitna(a, pos));
 return 0;
}

int iz4istiBitna(int a, int pos){
    int h = 1;
    h= h<<pos;
    h = ~ h;
    a=a&h;
    return a;
}