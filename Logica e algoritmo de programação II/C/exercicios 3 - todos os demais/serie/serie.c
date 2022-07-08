#include <stdio.h>
#include <math.h>
int main(){
	
	float s, num1, num2, total;
	
	
	num1 = 0;
	num2 = 0;
	
	do{
		printf("Insira um numero: ", num1);
		scanf("%f", &num1);
		
		printf ("\nInsira um segundo numero: ");
		scanf("%f", &num2);
		
		s = 1;
		
		while ((num1 != 0) && (num2 != 0));
		
		    s = num1/num2;
		
		
	}
	while ((num1 != 0) && (num2 != 0));
	printf("\nO S é: %.2f", s);
}