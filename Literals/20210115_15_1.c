#include<stdio.h>
int test();
int main(){
   
    test();
    test();
    printf("%d", test());

    
    return 0;
}
int test(){
    static int iValue = 10;
    return iValue += 1;
    
   
}
