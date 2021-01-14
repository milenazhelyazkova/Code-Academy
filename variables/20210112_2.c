#include<stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
int main(void){
	char i;
	char a = 10;
	bin(a);
	char x = 255;
	bin(a);
	i = x + a;
	printf("%d\n", i);
	
	return 0;
}
/*00001010
00001010
9*/