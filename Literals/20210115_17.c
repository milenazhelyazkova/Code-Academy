#include<stdio.h>

float const Pi = 3.14159;
float fCircle(float R);
float fElipsa(float A, float B);

int main(void){

  float R = 1;
  printf("circle area with R %.2f is %f\n",R, fCircle(R));
  R = 1.5;
  printf("circle area with R %.2f is %f\n",R, fCircle(R));
  R = 13;
  printf("circle area with R %.2f is %f\n",R, fCircle(R));

  float A = 0, B = 0;
  scanf("%f", &A);
  scanf("%f", &B);
  printf("elipsa aria with A = %.2f and B = %.2f is: %f\n",A, B, fElipsa(A, B));
}
float fCircle(float R){
  return Pi * R * R;
}
float fElipsa(float A, float B){
  return Pi * A * B;
}
