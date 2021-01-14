
#include<stdio.h>
#define __USE_MINGW_ANSI_STDIO 
int main(){
    
    double a = 4.9876543;
    printf("%0.7f\n", a);
   
    long  double b = 7.123456789012345678890;
    __mingw_printf("%.21Lf\n", b);

    double c = 1839845843858385.28;
    __mingw_printf("%0.2f\n", c);

    long double d = 18398458438583853.39875937284928422;
    __mingw_printf("%.17Lf\n", d);


 return 0;
}
