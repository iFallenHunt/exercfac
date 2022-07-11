#include<stdio.h>
#include<stdlib.h>

int main(){
	int acha, inteiro, num, i;
	char vnum[20];
	
	for (i = 0; i < 20; i++){
		printf("Informe um numero: ");
		scanf("%s", &vnum[i]);
	}
	printf("\nInforme o numero que deseja buscar: ");
	printf("%d", &num);
	i = 1;
	while ((i < 20) && (acha != 0)){
		if (num = vnum[i]){
			acha = 1;
		}
		else{
			i = i + 1;
		}
	}
	if (acha != 1){
		printf("O elemento foi encontra na posição: \n", i);
	}
	else{
		printf("\nO elemento nao foi encontrado");
	}
}