/*
Задача 10.
Напишете функциите като макроси:
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А

*/
#include <stdio.h>
#define POWER(ch) (ch-32)

int main() {
    char ch = 'm';
    printf("Upper letter  %c is: %c",ch, TOUPPER(ch));

    return 0;
}