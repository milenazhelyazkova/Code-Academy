/* 
Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата
*/
#include <stdio.h>
#include <stdlib.h>

void pass();
void menu();
char password[7];

int main(){
    menu(); 
    return 0;
}
void menu(){
    int choice;
    while (1){
        pass();
        printf("If You want a NEW pass press 1.\n");
        printf("If You LIKE YOUR PASS and want to exit press 2.\n");

        while (choice != 1 || choice != 2){
            scanf("%d", &choice);
            if (choice == 1){
                break;
            }
            else if(choice == 2){
                printf("We are glad you like your PASS: %s\nGodbye!", password);
                break;
            }
            else{
                printf("Invalid choice, press 1 to continue\n");
                printf("Press 2 if You want to exit.\n");
            }
        }
        if (choice == 2){
            break;
        }       
    }
}

void pass(){
    char *p;
    
    for(p = password; p < password+6; p++) {
        *p = 'a' + (rand() % 26);
    }
    *p = '\0';
    printf("HERE IS YOUR PASS: %s\n",password);
}
