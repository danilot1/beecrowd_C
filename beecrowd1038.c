#include <stdio.h>

int main(){
	int cod, quant;
	scanf("%i %i",&cod, &quant);
	if(cod == 1){
		printf("Total: R$ %.2f\n",quant*4.00);
	}
	else if(cod == 2){
		printf("Total: R$ %.2f\n",quant*4.50);	
	}
	else if(cod ==3){
		printf("Total: R$ %.2f\n",quant*5.00);
	}
	else if(cod ==4){
		printf("Total: R$ %.2f\n",quant*2.00);
	}	
	else if(cod==5){
		printf("Total: R$%.2f\n",quant*1.50);
	}	
	return 0;
}
