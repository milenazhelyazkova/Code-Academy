#include<stdio.h>

extern int g_Value;
void test();

int main(){
    
    test();
    test();
    test();
    printf("%i", g_Value);

    return 0;
}
void test(){
    g_Value += 1;
}
int g_Value = 10;