#include<stdio.h>

float const Pi = 3.14159;
float fCircle(float R);

int main(void){

  float R = 1;
  printf("%f\n", fCircle(R));
  R = 1.5;
  printf("%f\n", fCircle(R));
  R = 13;
  printf("%f\n", fCircle(R));
  return 0;
}
float fCircle(float R){
  return Pi * R * R;
}
