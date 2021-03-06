/*
Да се състави програма, с помощта на която 2 
(3, 1) играчи могат да играят (с право на връщане на 
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне 
до финала, отбелязан с F. Числото във всяка клетка 
показва броя стъпки по права линия, които могат да са 
направят при следващия ход. Като се започне от горния 
ляв ъгъл, са възможни само два хода 
3324312
2423243
4232421
4412234
3233422
3242321
113342F
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

HANDLE hConsole;
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;

int board[7][7]={{3,3,2,4,3,1,2},
                {2,4,2,3,2,4,3},
                {4,2,3,2,4,2,1},
                {4,4,1,2,2,3,4},
                {3,2,3,3,4,2,2},
                {3,2,4,2,3,2,1},
                {1,1,3,3,4,2,70}};

void printBoard(int board[7][7], int curRow, int curCol);
void gameMove(int board[7][7], int curRow, int curCol);
void backMove(int board[7][7],int oldRow, int oldCol, int curRow, int curCol);



int main(){
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    int curRow = 0;
    int curCol = 0;
    gameMove(board, curRow, curCol);

}

void printBoard(int board[7][7], int curRow, int curCol){
    int row,col;
    for(row=0; row<7;row++){
        for(col = 0; col<7; col++){
            if(board[row][col]==70)
                printf("%c ", board[row][col]);
            else{
                if(row==curRow && col==curCol){
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    printf("%d ", board[row][col]);
                    SetConsoleTextAttribute(hConsole, saved_attributes);
                }
                else
                    printf("%d ", board[row][col]);
            }
        }
        printf("\n");
    }
}


void gameMove(int board[7][7], int curRow, int curCol){

    printBoard(board, curRow, curCol);

    int step = board[curRow][curCol];
    int oldRow = curRow;
    int oldCol = curCol;
    
    printf("\ncurrent position is: board[%d][%d]",curRow, curCol);
    printf("\nYou have %d steps", step);
    printf("\nChose where to move\nu - for UP\nd - for down\nl - for left\nr - for Right\n ");
    char choice;
    fflush(stdin);
    scanf("%c", &choice);
    switch (choice)
    {
    case 'r':
        if(step == 1 && curCol<6){
            curCol +=1;
            step = board[curRow][curCol];   
        }
        else if(step == 2 && curCol<5){
            curCol +=2;
            step = board[curRow][curCol];
        }
        else if(step == 3 && curCol<4){
            curCol +=3;
            step = board[curRow][curCol];
        }
        else if(step == 4 && curCol<3){
            curCol +=4;
            step = board[curRow][curCol];
        }
        else{
            printf("\nUnvalid move\n");
            gameMove(board, curRow, curCol);
            break;
        }
        break;
    case 'l':
        if(step == 1 && curCol>0){
            curCol -=1;
            step = board[curRow][curCol];
        }
        else if(step == 2 && curCol>1){
            curCol -=2;
            step = board[curRow][curCol];
        }
        else if(step == 3 && curCol>2){
            curCol -=3;
            step = board[curRow][curCol];
        }
        else if(step == 4 && curCol>3){
            curCol -=4;
            step = board[curRow][curCol];
        }
        else{
            printf("\nUnvalid move\n");
            gameMove(board, curRow, curCol);
            break;
        }
        break;
    case 'u':
        if(step == 1 && curRow>0){
            curRow -=1;
            step = board[curRow][curCol];
        }
        else if(step == 2 && curRow>1){
             curRow -=2;
            step = board[curRow][curCol];
        }
        else if(step == 3 && curRow>2){
            curRow -=3;
            step = board[curRow][curCol];
        }
        else if(step == 4 && curRow>3){
            curRow -=4;
            step = board[curRow][curCol];
        }
        else{
            printf("\nUnvalid move\n");
            gameMove(board, curRow, curCol);
            break;
        }
        
        break;
    case 'd':
        if(step == 1 && curRow<6){
            curRow +=1;
            step = board[curRow][curCol];
        }
        else if(step == 2 && curRow<5){
            curRow +=2;
            step = board[curRow][curCol];
        }
        else if(step == 3 && curRow<4){
            curRow +=3;
            step = board[curRow][curCol];
        }
        else if(step == 4 && curRow<3){
            curRow +=4;
            step = board[curRow][curCol];
        }
        else{
            printf("\nUnvalid move\n");
            gameMove(board, curRow, curCol);
            break;
        }
        break;
    }

    backMove(board, oldRow, oldCol, curRow, curCol);
    
}
void backMove(int board[7][7], int oldRow, int oldCol, int curRow, int curCol){
    printBoard(board, curRow, curCol);

    char choice;
    if(board[curRow][curCol] == 70){
        printf("You won!");
        exit(0);
    }
    else{
        printf("\nIf you want to back press - y\nIf you want to exit press - n\n");
        fflush(stdin);
        scanf("%c",&choice);
        if(choice=='y'){
            gameMove(board, oldRow, oldCol);
        }
        else {
            gameMove(board,curRow, curCol);
        }
    }
}
