#include<stdio.h>

int main(){
    int c;
    int space = 0;
    
    while ((c= getchar())!= EOF){
        if (c == '\n'){ // за да може при започване на нов низ от символи да брои наново шпациите само в този низ
            space = 0;
        }
        else if(c==' '){
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