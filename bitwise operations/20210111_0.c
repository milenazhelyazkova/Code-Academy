#include <stdio.h>

int addDigit(int a, int b);

int main(){

int result = addDigit(4, 6);
printf("%d", result);

 return 0;
}

int addDigit(int a, int b){

    int result;
    result = a + b;
    return result;
}