#include <stdio.h>

int main(){
	
	int codEstado, peso, codCarga;
	float imposto, taxaImp, preco, precoQuilo;
	float total;
	
	printf("Digite o codigo do estado: ");
	scanf("%d", &codEstado);
	
	printf("\nDigite o peso da carga em toneladas: ");
	scanf("%d", &peso);
	
	printf("\nDigite o codigo da carga: ");
	scanf("%d", &codCarga);
	
	switch (codEstado){
		case 1:
			taxaImp = 0.2;
			break;
		case 2:
			taxaImp = 0.15;
		case 3:
			taxaImp = 0.1;
		case 4:
			taxaImp = 0.05;
		default:
			taxaImp = 0;
			printf("\nCodigo de estado invalido\n");
			break;
	    }
		if(codCarga >= 10 && codCarga <= 20){
			precoQuilo = 180;			
		}
		else if (codCarga >= 21 && codCarga <= 30){
			precoQuilo = 120;
		}
		else if (codCarga >= 31 && codCarga <= 40){
			precoQuilo = 230;
		}
		else {
			printf("\nCodigo de carga invalido\n");
			precoQuilo = 0;
		}
		imposto = peso * 1000 * precoQuilo * taxaImp;
		preco = peso * 1000 * precoQuilo;
		total =	preco + imposto;
		
		printf("\nPeso em kg: %d\nPreco: %.2f\nImposto: %.2f\nTotal: %.2f\n", peso * 1000, preco, imposto, total);
}
