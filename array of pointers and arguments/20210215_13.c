/*
Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());

*/

#include <stdio.h>

int my_strlen(char *s);

int main(){
    char *name = "Milena Zhelyazkova";
    printf("Elements in your string (excluding terminated zero) are: %d", my_strlen(name));
    return 0;
}
int my_strlen(char *s){ 
    int i= 0;
    while(*s++)
        i++;      
    return i;
}