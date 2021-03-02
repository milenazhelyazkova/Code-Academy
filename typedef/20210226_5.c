/*
Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.
*/
#include <stdio.h>


int main(){
    typedef int t_Aint[5];
    t_Aint n = {0,1,2,3,4};
    for(int i =0;i<5;i++)
    printf("%d, ",n[i]);

}