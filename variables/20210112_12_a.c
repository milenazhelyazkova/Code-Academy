#include <stdio.h>

int main(){
    char symbol = '#';

   printf("%c %c %c %c %c %c %c %c %c %c %c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);
    printf("  %c %c %c %c %c %c %c %c %c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);
    printf("    %c %c %c %c %c %c %c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol);
    printf("      %c %c %c %c %c\n", symbol, symbol, symbol, symbol, symbol);
    printf("        %c % c %c\n", symbol, symbol, symbol);
    printf("          %c\n", symbol);
    return 0;
}