/*
Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.
Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.
*/
#include <stdio.h>

int main(){
    typedef long long int t_Lint;
    t_Lint num = 123456868568900;
    printf("%lld",num);
    typedef t_Lint* t_prtLint;
    t_prtLint ptrnum = &num;
    printf("\n%lld", *ptrnum);
}