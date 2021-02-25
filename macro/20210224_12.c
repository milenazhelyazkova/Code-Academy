/*
/*Задача 12.
Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y; }
или
float float_max(float x, float y){
return x > y ? x : y; }
или
char char_max(char x, char y){
return x > y ? x : y; }  
 */
#include <stdio.h>

#define GENERIC_MAX(TYPE) TYPE TYPE##_max(TYPE x, TYPE y){return (x) > (y) ? (x) : (y);}

GENERIC_MAX(int)
GENERIC_MAX(float)
GENERIC_MAX(char)

int main(){
    int i = int_max(5,10);
    float f = float_max(2.3, 4.5);
    char ch = char_max('m', 'z');
    printf("int max is: %d\nfloat max is: %.2f\nchar max is: '%c'", i, f, ch);
    return 0;
}