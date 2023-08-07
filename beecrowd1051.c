#include <stdio.h>

int main (){
	float salario;
	scanf("%f", &salario);
	if (salario == 0.00 && salario == 2000.00){
		printf("Isento\n");
	}
	else if(salario == 2000.01 && salario == 3000.00){
		printf("R$ %.2f\n", salario*0.08);
	}
	return 0;
}
