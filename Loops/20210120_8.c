#include <stdio.h>

int main(){
    int number = 0;
    for(;;){
        number++;
        if(number==48) 
            break;
        printf("%d\n", number);    
    }
    return 0;  
}