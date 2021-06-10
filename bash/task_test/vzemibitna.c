#include <stdio.h>
#include <stdlib.h>

int vzemiBitna(int a, int pos){
    int h = 1;
    a=a>>pos;
    a=a&h;
    return a;
}

int main(int argc, char* argv[]){
	int number = atoi(argv[1]);
	int position = atoi(argv[2]);
	if(position < 0){
		exit(1);
	}
	else{
	printf("%d\n",vzemiBitna(number,position));
	}
	return 0;
}
