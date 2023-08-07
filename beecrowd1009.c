#include <stdio.h>

int main (){
	char nome;
	double salario_fixo, montante_vendas, salario_final;
	scanf("%s",&nome);
	scanf("%lf",&salario_fixo);
	scanf("%lf",&montante_vendas);
	salario_final = (0.15*montante_vendas)+salario_fixo;
	printf("TOTAL = R$ %.2lf",salario_final);
	
	
	return 0;
}
