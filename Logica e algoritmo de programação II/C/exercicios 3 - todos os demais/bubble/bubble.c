#include <stdio.h>

int main(){

	int casa[5];
	int i, j, troca;
	
	for (i = 0; i < 5; i++)
	{
		printf("Digite o Numero das casas apartir da casa %d: ", i);
		scanf("%d", &casa[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (casa[i] > casa[j])
			{
				troca = casa[i];
				casa[i] = casa[j];
				casa[j] = troca;
			}
		}
	}
	printf("\n Casas Ordenadas \n");
	for (i = 0; i < 5; i++)
	{
		printf("%d - ", casa[i]);
	}
}