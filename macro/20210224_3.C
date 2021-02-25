/*
Задача 3. Реализирайте условна компилация в зависимост от макрос
NAME
(дефиниране на макрос през компилатора: gcc -DNAME .\20210224_3.c)
*/
#include <stdio.h>
void debugMsg(const char *pszMsg){
    #ifdef NAME
        printf("Name: %s\n", pszMsg);
    #endif
}
int main(void){
    debugMsg("Milena Zhelyazkova");
    return 0;
}
