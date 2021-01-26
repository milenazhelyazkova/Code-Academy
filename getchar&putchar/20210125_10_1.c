#include <stdio.h>
#include <string.h>

void reverse(char string[]);

int main(){
    int c;
    int i = 0;
    char string[200];
    while ((c = getchar()) != EOF)
    {
        string[i++] = c;
        if (c == '\n'){
            reverse(string);
            i = 0;
        }
    }  
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
