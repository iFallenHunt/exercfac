#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	int par, impar, num;
	par = 0;
	impar = 0;
	
	do{
	printf("Informe o número:\n");
	scanf("%d", &num);
		if (num % 2 == 0)
			par++;
		else
			impar++;
	}
	while (num !=0);
	printf("A quantidade de par é: %d\n", par);
	printf("A quantidade de ímpar é: %d\n", impar);
	return (0);
}