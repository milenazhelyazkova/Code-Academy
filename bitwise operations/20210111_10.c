#include <stdio.h>

int main(unsigned int a, int pos){
    
    a = 254;
    pos = 2;
    unsigned int mask = ~0;
    mask = mask<<(pos+1);
    a = a & mask;

    printf("%d\n", a);

    return 0;
}
