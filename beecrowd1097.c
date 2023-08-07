#include <stdio.h>

int main (){
	int I, J;
	I = 1;
	J = 7;
do{
	printf("I=%d J=%d\n",I,J);
	J-=1;
	printf("I=%d J=%d\n",I,J);
	J-=1;
	printf("I=%d J=%d\n",I,J);
	J+=4;
	I+=2;
}while(I<10);
	return 0;

	
}
