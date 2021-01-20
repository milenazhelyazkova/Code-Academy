#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    printf("Enter one digit for lower limit a and one digit for upper limit b.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    int digit=a;
    int sum = 0;
    while(digit<=b){
        sum += digit;
        digit += 1;
    }
    printf("%d", sum);
    return 0;  
}