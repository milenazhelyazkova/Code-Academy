#include <stdio.h>
#include <unistd.h>

int main(){
    int number = 255;
    int mask = 128;
    char light [8] = {'.'};

    for(int i=0; i<8; i++)
    {
        if(number & mask)
            light[i] = '*';
        number >>= 1;
        mask >>= 1;
        
        //for(int x=0; x<8; x++)
        printf("%s\n", light);
        for(int a=0; a<8; a++)
            light[a] = '.';
        sleep (1);
    }
        
}