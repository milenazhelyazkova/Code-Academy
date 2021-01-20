#include <stdio.h>
int main()
{
    char szBuf[10] = "za"; //масив със 2 позиции [0] = 'z' и [1] = 'a'
    printf("Codes %s -> ", szBuf);// изпълнява се
    switch (szBuf[0]) // 1.променливата е 0вата позиция на масива
    {
    case 'x': 
        printf("No\n");
        break;
    case 'y':
    case 'z': // изпълнява се този case
        switch (szBuf[1]) //2. променливата е позиция 1 от масива
        {
        case 'a':
            printf(" Yes, "); //изпълнява се за switch 2
            break;
        case 'x':
            printf(" No, ");
            break;
        default:
            break;
        }
        printf("Maybe\n"); // изпълнява се за switch 1
        break;
    case 'a':
        printf("Yes\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }
    return 0;
} //Codes za ->  Yes, Maybe