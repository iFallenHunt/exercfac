#include <stdio.h>
#include <math.h>

int main(){
	int n1, n2, res;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	
	res = pow(n1, n2);
	
	printf("%d elevado a %d eh: %d", n1, n2, res);
	return(0);
}