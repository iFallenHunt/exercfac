#include <stdio.h>
#include <math.h>
int main()
{
	int numero, soma, quantidade, maior, menor, pares;
	int impares;
	float media;
	
	numero = 1;
	quantidade = 0;
	soma = 0;
	maior = 0;
	menor = HUGE_VAL;
	pares = 0;
	impares = 0;
	
	while (numero != 0)
	{
	printf("Digite um número: ");
	scanf("%d", &numero);
	if (numero != 0)
	quantidade++;
	soma = soma + numero;
	if (numero % 2 == 0 && numero != 0)
	pares++;
	else if (numero % 2 == 1 && numero != 0)
	impares++;
	if (numero > maior && numero != 0)
	maior = numero;
	if (numero < menor && numero != 0)
	menor = numero;
	}
	media = soma / quantidade;
	printf ("\nMédia: %.2f \nMaior: %d \nMenor: %d \nPares: %d \nÍmpare: %d\n", media, maior, menor, pares, impares);
	return (0);
}