#include <stdio.h>

void size(float r);

int main(){
    size(1);
    size(1.5);
    size(13);
    return 0;
}

void size(float r){
    const double pi = 3.14159;
    double S = r * r * pi;
    printf("%lf\n", S);
}