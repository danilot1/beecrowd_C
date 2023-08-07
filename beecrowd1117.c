#include <stdio.h>

int main (){
	double N1, G,contador;
	while (contador<2){
		scanf("%lf",&N1);
		if (N1 >= 0 && N1 <=10 ){
			contador++;
			G += N1;
		}
		else{
			printf("nota invalida\n");
		}
	}	
		
	printf("media = %.2lf\n",G/2.0);
	return 0;
}
