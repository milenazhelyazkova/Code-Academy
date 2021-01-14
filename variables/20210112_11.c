#include<stdio.h>

int main(){
    float fTomatoWeight;
    float fTomatoPrice = 4.5;
    float fFlowerWeight;
    float fFlowerPrice = 1.8;
    int fYogurtNumber;
    float fYogurtPrice = 0.5;
    int iIceCreamNumber;
    float fIceCreamPrice = 0.60;
    float fCandyWeight;
    float fCandyPrice = 1.5;
    int iLollipopNumber;
    float fLollipopPrice = 0.15;

    printf("Zdravejte, Dobre doshli v nashiq magazin! Dnes predlagame - presni domati, brashno, kiselo mlqko, sladoled na funijki i blizalki.\n");
    printf("Kolko kilograma domati shte jelaete?\n");
    scanf("%f",&fTomatoWeight);
    float fTomatoTotal = fTomatoWeight*fTomatoPrice;
    printf("%.2f\n", fTomatoTotal);

    return 0;

}
