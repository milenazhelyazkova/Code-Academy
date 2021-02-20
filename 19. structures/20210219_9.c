/*
Задача 9. Направете функця add(), която събира две точки.
*/
#include <stdio.h>

struct point{
    int x;
    int y;
};
struct point add(struct point a, struct point b){
    struct point new_point;
    new_point.x = a.x + b.x; /* a.x += b.x */
    new_point.y = a.y + b.y; /* a.y += b.y */
    return new_point; /* return a */
}
int main(){
    struct point a = {3,4};
    struct point b = {7,10};
    struct point c = add(a,b);
    printf("%d, %d", c.x, c.y);
    return 0;
}