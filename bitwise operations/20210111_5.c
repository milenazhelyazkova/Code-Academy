#include<stdio.h>

int obarniBitna(int a, int pos);

int main(){

int a = 15;
int pos = 5;
printf("%d", obarniBitna(a, pos));
 return 0;
}

int obarniBitna(int a, int pos){
    int h = 1;
    h= h<<pos;
    a=a^h;
    return a;
}