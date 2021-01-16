// продължение на задачата с if - else
#include <stdio.h>

int main()
{
    int numCaravans = 3;
    int numCampers = 3;
    int priceCaravan = 90;
    int priceCamper = 100;

    printf("Добре дошли в каравани и кемпери под наем\n");
    printf("Ако желаете каравана, натиснете 1\n");
    printf("Ако желаете кемпер, натиснете 2\n");

    char rez;
    scanf("%c", &rez);

    int total;
    if (rez == '1'){
        total += 90;
    } else {
        total += 100;
    }
    printf("ТРябва да платите общо %d leva.\n", total);
    printf("Желаете ли да продължите?");
    return 0;
}
