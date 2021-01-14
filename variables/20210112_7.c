/*7. Дефинирайте променливи със стойност 24 212, , 1 357 674, , .
Изведете всяка променлива на екрана със printf()*/
#include <stdio.h>

int main(){
    short int a = 24212;
    printf("%hd\n", a);
    
    int b = 1357674;
    printf("%d\n", b);

    int c = -1357674;
    printf("%d\n", c);

    int d = -1357674000 ;
    printf("%d\n", d);

    unsigned int e = 3657895000;
    printf("%u\n", e);

 return 0;
}
/*24212
1357674
-1357674
-1357674000
3657895000*/