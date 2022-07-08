#include <stdio.h>

int main()
{	
	float nota, soma, media;
	int cod, i, nnota, naprovado, nreprovado;
	
	naprovado = 0;
	nreprovado = 0;
	
	printf("Informe o numero de notas da disciplina: ");
	scanf("%d", &nnota);
	do
	{		
		printf("Informe o codigo do aluno: ");
		scanf("%d", &cod);
		soma = 0;
		if (cod !=0)
		{			
			for (i=1; i<=nnota; i++)
			{				
				printf("Informe a %d nota do aluno: ", i);
				scanf("%f", &nota);
				soma = soma + nota;				
			}			
		media = soma/nnota;
		if (media>=6)
			naprovado++;
		else
			nreprovado++;			
		}		
	}	
	while (cod != 0);
	printf("o numero de aprovados é: %d", naprovado);
	printf("o numero de reprovados é: %d", nreprovado);	
}