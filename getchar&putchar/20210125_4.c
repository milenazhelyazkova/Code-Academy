#include<stdio.h>

int main(){
    int c;
    int space = 0;
    
    while ((c= getchar())!= EOF){
        if(c==' '){
            space++;
            if(space>1){
                continue;   
            }
            else{
                putchar(c);
            }     
        }
        else{
            putchar(c);
        }
    }
}
