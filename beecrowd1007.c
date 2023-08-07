#include <stdio.h>

int main(){
	
	int A, B, C , D, prodAB, prodCD,diferenca;
	scanf("%i",&A);
	scanf("%i",&B);
	scanf("%i",&C);
	scanf("%i",&D);
	prodAB =A*B;
	prodCD =C*D;
	diferenca = prodAB-prodCD;
	printf("DIFERENCA = %i\n",diferenca);
	return 0;
	
	
}
