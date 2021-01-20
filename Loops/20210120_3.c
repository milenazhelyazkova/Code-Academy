#include <stdio.h>

int main(){
    int choice = 0;
    
    while(choice != 4){
        printf("If you want to see greeting message press 1\nIf you want to see poem press 2\nIf you want to see secret message press 3\nIf you want to exit press 4\n");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("Hellow\n");
                break;
            
            case 2:
                printf("poem:...\n");
                break;
            
            case 3:
                printf("The secret is:...\n");
                break;
            case 4:
                break;
            default:
                printf("Wrong choice\n");
                break;
        }
    }
    return 0;
}