#include<stdio.h>
#include<stdlib.h>

int main(){
	int mat[3][3]; //i para linhas j para colunas
	int i, j;
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("Insira o elemento mat[%d][%d]:\n", i, j); 
			scanf("%d", &mat[i][j]);
			
		}
	}
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (i == j){
				printf("%d", mat[i][j]); //vai apresentar apenas os numeros da diagonal principal
			}else {
				printf(" 0 ");
			}
			
		}
		printf("\n");
	}
}