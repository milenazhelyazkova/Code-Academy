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
	printf("%d\n", a);
	char x = 255;
	bin(x);
	printf("%d\n", x);
	
	i = x + a;
	bin(i);
	printf("%d\n", i);

	return 0;
}
/*00001010
10
11111111
-1
00001001
9*/