#include <stdio.h>

int main() {
	
	int cod_peca, quant_peca, cod_peca2, quant_peca2;
	float valor_peca, valor_peca2, quant_total1, quant_total2,valor_total;
	
	scanf("%i %i %f\n",&cod_peca,&quant_peca,&valor_peca);
	scanf("%i %i %f\n",&cod_peca2,&quant_peca2,&valor_peca2);
	
	quant_total1 = (quant_peca*valor_peca);
	quant_total2 = (quant_peca2*valor_peca2);
	valor_total = (quant_total1+quant_total2);
	
	printf("VALOR A PAGAR: R$ %.2f\n",valor_total);
	
	return 0;
	
}
