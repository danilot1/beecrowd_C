#include <stdio.h>

int main (){

	float A, B, C,	area_triangle,area_circle,area_trapezium,area_square,area_retangle;
	scanf("%f %f %f",&A,&B,&C);
	area_triangle = (A*C)/2;
	area_circle = 3.14159*C*C;
	area_trapezium = (A+B)*C/2;
	area_square = B*B;
	area_retangle = A*B ;
	
	printf("TRIANGULO: %.3f\n",area_triangle);
	printf("CIRCULO: %.3f\n",area_circle);
	printf("TRAPEZIO: %.3f\n",area_trapezium);
	printf("QUADRADO: %.3f\n",area_square);
	printf("RETANGULO: %.3f\n",area_retangle);
 
	
	return 0;
}
