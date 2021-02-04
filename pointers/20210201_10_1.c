/* Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].
 */
#include <stdio.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(){

    int number;
    int base;
    char string[100];
    printf("Enter an integer number: "); /* for example 15 */
    scanf("%d", &number);
    printf("\nEnter an base (options 2, 8, 16) to which you want the number to be converted: "); /* for example 16 */
    scanf("%d", &base);
    itob(number, string, base);
    printf("\nString of decimal number %d, as number with base %d  is '%s'",number, base, string);
    
    return 0;
}
void itob(int n, char s[], int b){
    int i = 0;
    do{ 
        if(n - (n/b)*b < 10)
            s[i] = (n - (n/b)*b) + '0';
        else
            s[i] = (n - (n/b)*b) + 55; /* because 10 = 0xA in ASCII A=65, 65-10 = 55 */
        n = n/b;
        i++;
        s[i] = '\0';
    }while (n > 0);
    reverse(s);
}
void reverse(char s[]){
    int c, i, j;
    for(i = 0, j = strlen(s) - 1; i < j; i++, j-- ){
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}
