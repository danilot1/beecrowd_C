#include <stdio.h>

int main(){

	char T;
	int N, soma, total=0, quant; 
	float  C, R, S, percoelhos, perratos , persapos;
	C = 0, R = 0, S = 0, soma =0;
	scanf("%i", &N);
	while (N!=0){
		scanf("%i %c",&quant,&T);
		soma += quant;
		if(T =='C'){
			C += quant;
		}else if(T =='R'){
			R += quant;
		}else if(T == 'S'){
			S += quant;
		}
		total += quant;
		N--;
	}
	percoelhos = (C*100/total);
	perratos = (R*100/total);
	persapos = (S*100/total);
	
	printf("Total: %i cobaias \n",total);
	printf("Total de coelhos: %d\n", C);
	printf("Total de ratos: %d\n",R);
	printf("Total de sapos: %d\n",S);
	printf("Percentual de coelhos: %.2f %%\n",percoelhos);
	printf("Percentual de ratos: %.2f %%\n",perratos);
	printf("Percentual de sapos: %.2f %%\n",persapos);
	return 0;
}
