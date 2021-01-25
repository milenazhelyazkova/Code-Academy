#include<stdio.h>

int main(){
    int c;
    int counter=0;
    c = getchar();
    while (c!=EOF){
        c= getchar();
        counter ++;
    }
    printf("\n%d", counter);
    return 0;
}