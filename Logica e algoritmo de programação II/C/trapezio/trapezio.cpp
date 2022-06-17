#include <stdio.h>

int main (){
	float base1, base2, altura, area;
	
	printf("Digite a base maior: ");
	scanf("%f", &base1);
	
	printf("\nDigite a base menor: ");
	scanf("%f", &base2);
	
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	area = ((base1 + base2) * altura) / 2;
	
	printf("A area do trapezio eh: %.2f", area);	
	
}