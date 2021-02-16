/*
Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“
*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "Baba, kaka, mama";
    char *p = s;
    while(*p){ /* untill '\0' */
        if(*p == 'a')
            *p = 'o';
        p++;
    }
    printf("%s", s);
    return 0;
}