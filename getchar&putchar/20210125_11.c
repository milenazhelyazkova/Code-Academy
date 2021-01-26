#include <stdio.h>
#include <string.h>

void reverse(char string[]);

int main(){
    char string [] = "Milena Zhelyazkova!";
    reverse(string);
}
void reverse(char string[]){
    char reverse[strlen(string)];
    int i, j;
    for(i=0, j= strlen(string)-1; i< strlen(string); i++, j--){
        reverse[i] = string[j];
        printf("%c", reverse[i]);
    }
    printf("\n");
}
