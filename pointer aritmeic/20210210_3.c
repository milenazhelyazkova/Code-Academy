/* 
Задача 3. Използвайте Задача 2. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100
char *input();
char *reverse(char a[], int n);


int main(){
    char str[SIZE]; 
    char rst[SIZE];  
    int ch, i=0, j = 0;
    char *p;
    printf("Enter text you want to check if palindrome: "); 
    while((ch=getchar()) != '\n')
        str[i++]=ch;
    str[i] = '\0';
    printf("Your text is: %s\n", str);
    p = &str[i-1]; /* p is pointing to the element before '\0' == p=str+i-1*/
    for(p; p>=str;p--) /* from the adres of the last element(before terminated zero), to the first */
        rst[j++] = *p; /* the elements are stored backwards in new array */
    rst[j] = '\0';
    printf("Backwards is: %s\n", rst);
    int result = strcmp(str,rst);
    if(result==0)
        printf("Text is palindrome.");
    else
        printf("Text is NOT palindrome.");
    return 0; 
}