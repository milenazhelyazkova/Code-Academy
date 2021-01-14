#include<stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
int main(void){

	unsigned char z = 0;
	bin(z);
    printf("%d\n", z);
	char a = -10;
	bin(a);
    printf("%d\n", a);
	z = z + a;
    bin(z);
	printf("%d\n", z);
    
	
	return 0;
}
/*00000000
0
11110110
-10
11110110
246*/