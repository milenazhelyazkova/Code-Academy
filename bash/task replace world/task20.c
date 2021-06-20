/*Дефинирайте стринг „I am a poor programmer"
Заменете през пойнтер "poor" с "great"*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char letter);

int main(int argc, char *argv[])
{
    if(argc!=4){
        printf("3 arguments needed\n");
        exit(1);
    }
    char *p1 = argv[1];
    char *p2 = argv[2];
    char *old_world = argv[3];
    int check_new_world=check(p2[0]);
    int check_old_word=check(old_world[0]);
    if(check_old_word !=1 || check_new_world != 1){
        printf("incorect input\n");
        exit(2); /* incorrect input */
    }
       
    char first_letter = old_world[0];
    if(strstr(p1,old_world) ==NULL){
        printf(" world to replace is not in the sentance\n");
        exit(3); /* world to replace is not in the sentance*/
    }
        
    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%c\n", first_letter);
    while (*p1++ != '0')
    {
        if (*p1 == first_letter)
        {
            while (*p2)
            {
                *p1 = *p2;
                p1++, p2++;
            }
            break;
        }
    }
    printf("New sring is : %s\n", argv[1]);
    return 0;
}
int check(char letter){
        
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
        return 1;
    else 
        return 0;
}
