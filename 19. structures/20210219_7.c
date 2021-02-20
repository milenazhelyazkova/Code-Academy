/*
Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки. 
*/
#include <stdio.h>

struct point{
    int x;
    int y;
};
int main(){
    struct point a = makepoint(3,4);
    struct point b = makepoint(7,10);
    
    return 0;
}
stuct point makepoint(int x, int y){
    struct point my_point;
    my_point.x = x;
    my_point.y = y;
    return my_point;
}
