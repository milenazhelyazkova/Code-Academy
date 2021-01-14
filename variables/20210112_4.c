#include<stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
int main(void){

	char z = 10;
	bin(z);
    printf("%d\n", z);
	char a = -127;
	bin(a);
    printf("%d\n", a);
	z = z + a;
    bin(z);
	printf("%d\n", z);

    
	
	return 0;
}
/*00001010
10
10000001
-127
10001011
-117 */