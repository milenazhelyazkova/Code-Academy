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

#define ROW 7
#define COL 7
/* to be able to print current position with different colour */
HANDLE hConsole;
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;

void printBoard(int board[ROW][COL], int curRow, int curCol);
void gameMove(int board[ROW][COL], int curRow, int curCol);
void backMove(int board[ROW][COL],int oldRow, int oldCol, int curRow, int curCol);

int main(){
    int board[ROW][COL]={{3,3,2,4,3,1,2},
                        {2,4,2,3,2,4,3},
                        {4,2,3,2,4,2,1},
                        {4,4,1,2,2,3,4},
                        {3,2,3,3,4,2,2},
                        {3,2,4,2,3,2,1},
                        {1,1,3,3,4,2,70}};
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    int curRow = 0;
    int curCol = 0;
    gameMove(board, curRow, curCol);

    return 0;
}
void printBoard(int board[ROW][COL], int curRow, int curCol){
    int row,col;
    for(row=0; row<ROW;row++){
        for(col = 0; col<COL; col++){
            if(board[row][col]==70)
                printf("%c ", board[row][col]);
            else{
                if(row==curRow && col==curCol){
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED); /* to print current position with red */
                    printf("%d ", board[row][col]);
                    SetConsoleTextAttribute(hConsole, saved_attributes); /* to return colour */
                }
                else
                    printf("%d ", board[row][col]);
            }
        }
        printf("\n");
    }
}
void gameMove(int board[ROW][COL], int curRow, int curCol){

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
        if(curCol<COL-step){ 
            curCol +=step; 
            step = board[curRow][curCol];   
        }
        else{
            printf("\nUnvalid move\n");
            gameMove(board, curRow, curCol);
            break;
        }
        break;
    case 'l':
        if(curCol>step-1){
            curCol -=step;
            step = board[curRow][curCol];
        }
        else{
            printf("\nUnvalid move\n");
            gameMove(board, curRow, curCol);
            break;
        }
        break;
    case 'u':
        if(curRow>step-1){
            curRow -=step;
            step = board[curRow][curCol];
        }
        else{
            printf("\nUnvalid move\n");
            gameMove(board, curRow, curCol);
            break;
        }
        
        break;
    case 'd':
        if(curRow<ROW-step){
            curRow +=step;
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
void backMove(int board[ROW][COL], int oldRow, int oldCol, int curRow, int curCol){
    printBoard(board, curRow, curCol);

    char choice;
    if(board[curRow][curCol] == 70){ /* check if value of current pos is F */
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
