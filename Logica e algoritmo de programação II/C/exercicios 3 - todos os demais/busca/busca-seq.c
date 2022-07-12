#include<stdio.h>
#include<stdlib.h>

int main()
{
	int casa[10];
	int i, acha, busca;
		
	for (i = 0; i < 10; i++)
	{
		printf("Informe o numero da casa: ");
		scanf("%d", &casa[i]);
	}
	printf("\nInforme o numero que deseja buscar: ");
	scanf("%d", &busca);
	acha = 0;
	i = 0;
	while ((acha == 0) && (i < 10))
	{
		if (casa[i] == busca)
		{
			acha = 1;
		}
		else
		{
			i++;
		}
	}
	if (acha == 1)
	{
		printf("A Casa %d foi encontra na posição: %d\n", busca, i);
	}
	else
	{
		printf("\nA Casa não foi encontrada");
	}
}