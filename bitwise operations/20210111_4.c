#include<stdio.h>

int vdigniBitNa(int a, int pos);

int main(){

int a = 15;
int pos = 5;
printf("%d", vdigniBitNa(a, pos));
 return 0;
}

int vdigniBitNa(int a, int pos){
    int h = 1;
    h= h<<pos;
    a=a|h;
    return a;
}