#include <stdio.h>
int main() {
    int x = 10;
    int y = 10;
    int z = 30;
    int true = x==y+(z < y)!=20;
    printf("%d", true);
}/* аз го разбирам ето така: 
1: (z<y), (30<10) връща 0;
2: y + 0 = 10
3. x == 10, 10==10, връща 1
4. 1 != 20, връща 1
5. true = 1 */