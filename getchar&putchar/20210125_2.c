#include<stdio.h>

int main(){
    int c;
    int newLine=0;
    c = getchar();
    while ((c= getchar())!=EOF){
        if(c == '\n')
            newLine++;
        
    }
    printf("\n%d", newLine);
    return 0;
}