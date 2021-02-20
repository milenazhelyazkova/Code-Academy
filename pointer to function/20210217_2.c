/*
Задача 1. Направете две функции и извикайте желаната функция с
указател към функция, съобразно знака, подаден от командния ред: а.оut
20 + 3
*/
#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB) {
     return(nA + nB); 
     }  
int fnMinus(int nA, int nB) { 
    return(nA - nB); 
    }
int fnDivided(int nA, int nB) { 
    return(nA / nB); 
    }
int fnMultipy(int nA, int nB) { 
    return(nA * nB); 
    }
int main(int argc, char* argv[]) {
    int ( * pfCalc ) ( int, int ) = NULL;
    if (argc < 4){
        printf("\nUsage: %s arg1  +, - , / , .   arg3\n", argv[0]);
        }
    else if ('-' == argv[2][0]){ 
        pfCalc = fnMinus; 
        }
    else if ('+' == argv[2][0]) {
         pfCalc = fnPlus; 
         }
    else if ('/' == argv[2][0]) {
         pfCalc = fnDivided; 
         }
    else if ('.' == argv[2][0]) {
         pfCalc = fnMultipy; 
         }
    (NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[1]), atoi(argv[3])));
    return 0;
}
