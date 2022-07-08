/* Estrutura case em C */
#include <stdio.h>
int main(){

	char nome[30];
	int idade, valor, plano;
	
	printf("Digite o seu nome:");
	scanf("%s", &nome);
	
	printf("Digite a sua idade:");
	scanf("%d", &idade);
	
	if (idade <= 18){
		printf("\nO plano para o %s de %d anos e: R$50,00", nome, idade);
	}
	else{
		if ((idade >= 19) && (idade <= 29)){
			printf("\nO valor do plano para o %s de %d anos e: R$70,00", nome, idade);
		}
		else{
			if ((idade >= 30) && (idade <=45)){
				printf("O plano para o %s de %d anos e: R$90,00\n", nome, idade);
			}
			else{
				if ((idade >= 46) && (idade <= 65)){
					printf("O plano para o %s de %d anos e: R$130,00\n", nome, idade);
				}
				else{
					printf("O plano para o %s de %d anos e: R$170,00\n", nome, idade);
				}
			}
		}
	}
}		