/*
Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.
*/
#include <stdio.h>


int add(int* a, int* b){
    return *a + *b;
}
typedef int (*t_add)(int* a, int* b); /* pointer to function */

int main(){
    
    int num1 = 2, num2=4;
    typedef int* t_ptrInt;
    t_ptrInt ptrnum1 = &num1;
    t_ptrInt ptrnum2 = &num2;
    printf("Sum from function: %d", add(ptrnum1,ptrnum2));
  
    t_add ptrAdd = NULL; 
    ptrAdd = &add;
    printf("\nSum from pointer to function: %d", ptrAdd(ptrnum1, ptrnum2));
    return 0;
}
