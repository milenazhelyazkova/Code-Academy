#include<stdio.h>
void test();
int main(){
   
    test();
    test();
    test();
    return 0;
}
void test(){
    static int iValue = 10;
    iValue += 1;
    printf("%d\n", iValue); 
}
