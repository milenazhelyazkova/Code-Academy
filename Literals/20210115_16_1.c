#include <stdio.h>
const float Pi = 3.14159;
void test(float R);

int main(){
    test(1);
    test(1.5);
    test(13);
    return 0;
}

void size(float R){
    float circle = Pi * R * R;
    printf("%f\n", circle);
}
