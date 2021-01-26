#include<stdio.h>

int main(){
    char str[200];
    int c;
    int i = 0;
    while ((c= getchar())!= EOF){
        str[i++] = c;
        if (c == '\n' && i >81){
            str[i]= '\0';
            printf("%s", str);
            printf("\n");
            i = 0;
            
        }
        else if(c == '\n' && i<81){
            str[i]='\0';
            i = 0;
            
        }
    }
}

        