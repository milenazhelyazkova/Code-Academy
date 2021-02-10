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
int menu();
void action(int);

int main(){
    pass();
    menu();
    return 0;
}
void pass(){
    char *p;
    char pass[7];
    for(p = pass; p < pass+6; p++) {
        *p = 'a' + (rand() % 26);
    }
    *p = '\0';
    printf("HERE IS YOUR PASS: %s\n",pass);
}
int menu(){
    int choice;
    printf("If You want a NEW pass press 1.\n");
    printf("If You LIKE YOUR PASS and want to exit press 2.\n");
    scanf("%d", &choice);
    action(choice);
    return choice;
}
void action(int choice){
    if (choice == 1){
        pass();
        menu();
    }else if(choice == 2){
        printf("We are glad you like your PASS, Godbye!");
    }else{
        printf("Invalid choice\n");
        menu();
    } 
}     

