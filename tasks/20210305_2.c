/*
Задача 2 Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
*/
#include <stdio.h>
#include <stdlib.h>
int number;

typedef struct pack{
    int weight;
    int volume;
}pack;

pack *inputData(pack *my);
double packPrice(int weight, int volume);

int main(){
    
    pack *minePacks = inputData(minePacks); /* поинтер на който присвоявам върнатият адрес на заделената памет*/
    double price[number]; /* цена на всяка една пратка */
    int weightall=0;
    int volumeall=0;
    double priceAll =0;
    double totalPrice =0;

    for(int i=0; i<number; i++){
        price[i] = packPrice(minePacks[i].weight, minePacks[i].volume);
        printf("\nprice of pack %d with weight %d grams and volume %d cm is %.2flv", i+1, minePacks[i].weight, minePacks[i].volume, price[i]);
        priceAll += price[i]; /* обща цена на пратките */
    }
    printf("\nTotal Price if you send one by one is: %.2flv", priceAll);

    for(int i=0; i<number; i++){
        weightall +=minePacks[i].weight; /* общо тегло на пратките */
        volumeall +=minePacks[i].volume; /* общ обем на пратките */
    }
    printf("\nWeight of all packs is %d grams amd volume ot all packs is %d cm",weightall, volumeall);
    
    if(weightall<=3000){
        totalPrice = packPrice(weightall, volumeall); /* цена ако ги обеденим в един пакет */
        printf("\nPrice of pack if you send all as one is: %.2flv", totalPrice);
    }
    else 
        printf("\nYou can not sent together as one over 3000gr");
    
    free(minePacks);
    return 0;

}
pack *inputData(pack *my){
    
    printf("Enter the number of packeges you want to ship: ");
    scanf("%d", &number);
    my = (pack*)malloc(number * sizeof(pack));
    for(int i =0; i< number; i++){
        printf("Enter the weight in grams of packege %d you want to ship not more then 3000: ", i+1);
        scanf("%d", &my[i].weight);
        printf("Enter the volume in cm of packege %d you want to ship: ", i+1);
        scanf("%d", &my[i].volume);
    }
    return my;
}
double packPrice(int weight, int volume){  /*Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;*/
    double priceW = 0;
    double priceV = 0;
    if(weight<=20){
        priceW = 0.46;
    }
    if(weight>=21 && weight<=50){
        priceW = 0.69;
    }
    if(weight>=51 && weight<=100){
        priceW = 1.02;
    }
    if (weight>=101 && weight<=200){
        priceW = 1.75;
    }
    if (weight>=201 && weight<=350){
        priceW = 2.13;
    }
    if (weight>=351 && weight<=500){
        priceW = 2.44;
    }
    if (weight>=501 && weight<=1000){
        priceW = 3.20;
    }
    if (weight>=1001 && weight<=2000){
        priceW = 4.27;
    }
    if (weight>=2001 && weight<=3000){
        priceW = 5.03;
    }
    /*Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв*/
    if (volume<10){
        priceV = 0.01;
    }
    if (volume>=10 && volume<50){
        priceV = 0.11;
    }
    if (volume>=50 && volume<100){
        priceV = 0.22;
    }
    if (volume>=100 && volume<150){
        priceV = 0.33;
    }
    if (volume>=150 && volume<250){
        priceV = 0.56;
    }
    if (volume>=250 && volume<400){
        priceV = 1.50;
    }
    if (volume>=400 && volume<500){
        priceV = 3.11;
    }
    if (volume>=500 && volume<600){
        priceV = 4.89;
    }
    if (volume>=600){
        priceV = 5.79;
    }
    return priceW+priceV;
}
