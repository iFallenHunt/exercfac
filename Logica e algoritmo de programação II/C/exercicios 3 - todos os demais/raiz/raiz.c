#include <stdio.h>
#include <math.h>

int main (){
	int num1
	float quad, res;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num1);
	
	quad = sqrt(num1);
	res = num1 * num1;
	
	printf("O numero elevado ao quadrado eh %.2f\n", res);
	printf("A raiz de %d eh %.2f: ", num1, quad);
	
}