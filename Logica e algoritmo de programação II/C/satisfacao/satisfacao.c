#include <stdio.h>
int main()
{
	int idade, npessoas, npessoasi;
	int npessoass, opiniao;
	float somai, media;
	
	npessoas = 0;
	npessoass = 0;
	npessoasi = 0;
	somai = 0;
	
	printf("Informe a idade:\n");
	scanf("%d", &idade);
	while (idade != 0)
	{
		do
		{
			printf("Informe a opinião:\n");
			scanf("%d", &opiniao);
		}
		while ((opiniao!=1) && (opiniao!=2) && (opiniao!=3));
		npessoas ++;
		if (opiniao == 1)
		{
			somai = somai + idade;
			npessoass ++;
		}
		else
		{
			if (opiniao == 3)
				npessoasi ++;
		}
		printf("Informe a idade:\n");
		scanf("%d", &idade);
		}
		media = somai / npessoass;
		printf ("O número de pessoas insatisfeitas é: %d\n", npessoasi);
		printf ("O número de pessoas satisfeitas é: %d\n", npessoass);
		printf ("A média de idade das pessoas satisfeitas é: %.2f\n", media);
	return (0);
}