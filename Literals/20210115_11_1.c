#include<stdio.h>

int main(){
    char str[] = "Hello";
    char rts[] = "Hello";
  
    rts[4] = str[0];
    rts[3] = str[1];
    rts[2] = str[2];
    rts[1] = str[3];
    rts[0] = str[4];
    
   
    printf("%s",rts);
    return 0;
}