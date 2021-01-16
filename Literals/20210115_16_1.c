#include <stdio.h>

void test(float r);

int main(){
    test(1);
    test(1.5);
    test(13);
    return 0;
}

void size(float r){
    const float pi = 3.14159;
    float circle = r * r * pi;
    printf("%f\n", circle);
}
