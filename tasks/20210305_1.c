/* 
Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct store{
    int longBoard;
    int shortBoard;
    int smallBracket;
    int bigBracket;
    int screw;
}store;

void inputStore(store *now);
int shelf(store *now);

int main(){
    store *current =malloc(sizeof(store));
    inputStore(current);
    printf("The carpenter can make %d shelfs",shelf(current));
    free(current);
    
    return 0;
}
void inputStore(store *now){
    printf("Enter number of long boards in store, ");
    printf("\nyou need at least 4 if you want to have a shelf: ");
    scanf("%d", &now->longBoard);
    printf("Enter number of short boards in store, ");
    printf("\nyou need at least 6 if you want to have a shelf: ");
    scanf("%d", &now->shortBoard);
    printf("Enter number of small brackets in store, ");
    printf("\nyou need at least 12 if you want to have a shelf: ");
    scanf("%d", &now->smallBracket);
    printf("Enter number of big brackets in store, ");
    printf("\nyou need at least 2 if you want to have a shelf: ");
    scanf("%d", &now->bigBracket);
    printf("Enter number of screws in store, ");
    printf("\nyou need at least 14 if you want to have a shelf: ");
    scanf("%d", &now->screw);
}
int shelf(store *now){
    int counter=0;
    while(now->longBoard>=4 && now->shortBoard>=6 && now->smallBracket>=12 && now->bigBracket>=2 && now->screw>=14){
        now->longBoard -=4;
        now->shortBoard -=6;
        now->smallBracket -=12;
        now->bigBracket -=2;
        now->screw -=14;
        counter++;
    }
    return counter;
}