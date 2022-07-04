#include <stdio.h>

int main (){
	float n1, n2, n3, n4, media;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &n2);
	printf("Digite o terceiro numero: \n");
	scanf("%f", &n3);
	printf("Digite o quarto numero: \n");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("\nMedia: %.2f", media);
}