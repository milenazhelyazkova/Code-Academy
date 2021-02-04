/* Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[] */
#include <stdio.h>

void squeeze(char s[], int c);

int main(){
    char string[] = "cute cats.";
    int symbol = 'c';
    squeeze(string, symbol);
    printf("%s", string);
    
    return 0;
}
void squeeze(char s[], int c)
{   
    int i = 0, j=0;
    for(i; s[i] != '\0'; i++){
        if(s[i] != c)
            s[j++] = s[i];
        s[j] = '\0';
    }
}
