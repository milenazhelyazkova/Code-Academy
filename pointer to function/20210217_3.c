/*
Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.
*/

#include <stdio.h>
#include <stdlib.h>

float fun0(float a, float b) {
    return a+b; 
}  
float fun1(float a, float b) {
    return a-b; 
} 
float fun2(float a, float b) {
    return a*b; 
}
float fun3(float a, float b) {
    if(b==0){
        printf("it is not possible to devide by zero\n");
        exit(1);
    }
    return a/b; 
} 
int main(){
    int choice;
    float a, b, result;
    float (*ptr[4])(float,float) = {fun0, fun1, fun2, fun3};
    printf("enter youur choice 0 for sum, 1 or substract, 2 for multipy, 3 for division\n");
    scanf("%d", &choice);
    printf("Enter two numbets:\n");
    scanf("%f %f", &a, &b);
    printf("%f", ptr[choice](a,b));
    return 0;
}