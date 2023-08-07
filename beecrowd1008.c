#include <stdio.h>

int main(){
	
	int number, hours;
	float salary, total_salary;
	scanf("%i",&number);
	scanf("%i",&hours);
	scanf("%f",&salary);
	total_salary = hours*salary;
	
	printf("NUMBER = %i\n",number);
	printf("SALARY = U$ %.2f\n",total_salary);
	
	return 0;
	
}
