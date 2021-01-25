#include<stdio.h>

int main(){
    int c;
    int newLine=0;
    int tab = 0;
    int space = 0;
    
    while ((c= getchar())!=EOF){
        if(c == '\n')
            newLine++;
        else if (c == '\t')
            tab++;
        else if (c==' ')
            space++;
          
    }
    printf("\n new lines are: %d\ntabs are: %d\nspaces are: %d", newLine, tab, space);
    return 0;
}