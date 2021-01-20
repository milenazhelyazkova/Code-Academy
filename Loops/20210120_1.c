#include <stdio.h>

int main(){
    int choice = 0;
    printf("If you want to see greeting message press 1\nIf you want to see poem press 2\nIf you want to see secret message press 3\n");
    scanf("%d", &choice);
    if(choise == 1){
        printf("Hellow");
    }
    else if(choice == 2){
        printf("poem:...");
    }
    else if(choice == 3){
        printf("secret is:...");
    }
    else{
        printf("wrong choise");
    }
}