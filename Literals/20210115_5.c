#include<stdio.h>

int main() {

    int nX = 1;
    int nY = 1;
    nY = nX + 1;
    printf("nX = %d, nY = %d\n", nX, nY); /* ok */
    nX = 1 + nX + nY; /* rvalue error */
    printf("nX = %d, nY = %d\n", nX, nY);
    nY = 2 * nX ++ * ( nY = nX * 3 ) + nX ++ + nY --;
    printf("nX = %d, nY = %d\n", nX, nY);

    return 0;
}