#include <stdio.h>

int main(){

    int num, mask;
    num = 127; 
    mask = 1;  

    
    num = num|mask;

    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;
    mask = mask<<3;
    num = num|mask;

    printf("%d", num);

    return 0;
}
