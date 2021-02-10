/* 
Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.
*/
#include <stdio.h>

int main(){
    char str[100];   
    int ch, i=0;
    char *p;
    printf("Enter text you want to print backwards: ");
    while((ch=getchar()) != '\n')
        str[i++]=ch;
    str[i] = '\0';
    p = str+i-1; /* p is pointing to the element before '\0== p=&str[i-1]*/
    printf("Bckwords your text is: ");
    for(p; p>=str;p--)
        printf("%c", *p);
    return 0;
}