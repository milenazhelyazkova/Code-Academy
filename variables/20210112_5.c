#include <stdio.h>
int main(){

    int iValue = 10000;
    printf("\n%d\n", sizeof(iValue));
    float fValue = 3.21;
    printf("\n%d\n", sizeof(fValue));
    short int siValue = 1000;
    printf("\n%d\n", sizeof(siValue));
    unsigned long int ulValue = 1111111111;
    printf("\n%d\n", sizeof(ulValue));

    return 0;
}
/*4
4
2
4*/