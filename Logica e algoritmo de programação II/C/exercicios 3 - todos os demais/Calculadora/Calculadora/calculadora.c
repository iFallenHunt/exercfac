#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float soma (float A, float B){
	float resultado;
	resultado = A + B;
	printf("\nO resultado da soma é: %.2f \n", resultado);
}
float subtracao(float A, float B){
	float resultado;
	resultado = A - B;
	printf("\nO resultado da Subtração é: %.2f \n", resultado);
}
float multiplicacao(float A, float B){
	float resultado;
	resultado = A * B;
	printf("\nO resultado da Multiplicação é: %.2f \n", resultado);
}
float divisao(float A, float B){
	float resultado;
	resultado = A / B;
	printf("\nO resultado da Divisão é: %.2f \n", resultado);
}

int main(){
	
	int opcao;
	float X, Y, resultado;
	
	opcao = 0;
	while (opcao != 5) {
		printf ("\n");
		printf ("1 - Soma\n");
		printf ("2 - Subtração\n");
		printf ("3 - Multiplicação\n");
		printf ("4 - Divisão\n");
		printf ("5 - Sair\n");
		printf ("Digite a opção: ");
		scanf("%d", &opcao);
						
		if (opcao != 5){
			printf("Informe o valor de X: ", X);
			scanf("%f", &X);
			printf("\nInforme o valor de Y: ", Y);
			scanf("%f", &Y);
						
			switch (opcao){
				case 1:
					resultado = soma(X, Y);
				
				break;
				
				case 2:
					resultado = subtracao(X, Y);
				
				break;
				
				case 3 :
					resultado = multiplicacao(X, Y);
				
				break;							
				
				case 4:
					resultado = divisao(X, Y);
				
				break;
									
			}
		}
	}
}