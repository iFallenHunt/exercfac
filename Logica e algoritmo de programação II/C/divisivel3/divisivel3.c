#include <stdio.h>

int main(){
	int num, i;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	while (num < 100){
		
		if (num % 3 == 0)
			printf("\nO numero %d e divisivel por 3.", num);
		else
			printf("\nO numero %d nao e divisivel por 3", num);
		break;
	}
}