#include <stdio.h>

int main(unsigned int num, int i){

    //задавам стойност на чистлото и на индекса
    num = 254;
    i = 2;

    //правя маска, която съдържа само единици в стойността си
    unsigned int mask = ~0;
    
    //шифтвам с желания брой позиции
    mask = mask<<(i+1);
    
    //обръщам я и сега на желаните позиции имам единици
   // mask = ~ mask;
    
    //използвам побитов оператор AND, за да нулирам посочените битове
    num = num & mask;

    printf("%d\n", num);

    return 0;
}