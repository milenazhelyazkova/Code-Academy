#include <stdio.h>

int main()
{
    int numCaravans = 3;
    int numCampers = 3;
    double priceCaravan = 90;
    double priceCamper = 100;

    printf("Welcome to Caravan Camper for Rent\n");
    printf("For a Caravan, press 1\n");
    printf("For a Camper, press 2\n");

    char rez;
    scanf("%c", &rez);

    double total;
    if (rez == '1'){
        total += 90;
    } else {
        total += 100;
    }
    printf("You have to pay total %.2lf leva.\n", total);
    printf("Would you like anything else?");
    return 0;
}