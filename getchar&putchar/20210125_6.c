#include<stdio.h>

int main(){
    int c;
    int digits = 0;
    int total= 0;
    while ((c= getchar())!= EOF){
        total++;
        if(c< '0' || c>'9')
            continue;
        digits++;
              
    }
    printf("total number of symbols is: %d\nthe number of digits is: %d",total, digits);
}
