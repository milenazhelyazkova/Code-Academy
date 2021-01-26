
#include<stdio.h>


 void reverse(){
    int c = getchar();
    int counter=0;
    char str[] ={c};
    int i =0;
    while ((c = getchar())!=EOF) //броим въведените символи
        str[counter] = c; // прави м низ от въведените символи
        counter ++;
    char rst[counter-1]; // декларираме нов низ, с counter -1 брой символи, защото се брои и ЕОF за символ
    for(i = 0; i!= '\0'; i++){
        str[i] = rst[counter -2]; // защото последният символ е термениращата нула
        -- counter;
     }
    rst[i+1] = '\0'; // последният символ да е терменираща нула
    printf("%s", rst);

 }
int main(){
    reverse();
}
