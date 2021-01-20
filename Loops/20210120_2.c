#include <stdio.h>

int main(){
    int choice = 0;
    printf("If you want to see greeting message press 1\nIf you want to see poem press 2\nIf you want to see secret message press 3\n");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("Hellow");
            break;
        
        case 2:
            printf("poem:...");
            break;
        
        case 3:
            printf("The secret is:...");
            break;
        
        default:
            printf("Wrong choice");
            break;
        
    }
}