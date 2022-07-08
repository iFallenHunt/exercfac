#include <stdio.h>

int main(){
	
	int numero, i;
	float resposta, divisor;
	resposta = 0;
	printf("digite um numero: ");
	scanf("%d", &numero);
	for (i=1; i <= numero; i++){
		divisor = 1;
		resposta = resposta + 1/divisor;
	}
	printf("resposta: %f\n", resposta);
}