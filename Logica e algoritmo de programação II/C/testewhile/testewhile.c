#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char nome[20];
	
	
	int n1, n2, adicional, soma;
	int nota1, nota2;
	
	nota1 = 0;
	nota2 = 0;
    
	printf("Digite seu nome: ");
    scanf("%s", &nome);
    
    while (nome != 0){
    	do{
    		printf("\nDigite a primeira nota: ");
    		scanf("%d", &n1);
    		
    		nota1++;
    		
    		if (n1 !=0){
    			printf("\nDigite a segunda nota: ");
    			scanf("%d", &n2);
    			
    			nota2++;
    			
    			soma = n1 + n2;
    			printf("o resultado é: %d", soma);
			}
			else {
				printf("sem nota");
			
			}
		}
		while ((n1 !=0) && (n2!=0));
	printf("\nDigite seu nome: ");
    scanf("%s", &nome);	
	}

}
