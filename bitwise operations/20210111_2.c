#include <stdio.h>

int vzemiBitna(int a, int pos);

int main(){

int a = 35;
int pos = 5;
printf("%d", vzemiBitna(a, pos));
 return 0;
}

int vzemiBitna(int a, int pos){
    int h = 1;
    a=a>>pos;
    a=a&h;
    return a;
}