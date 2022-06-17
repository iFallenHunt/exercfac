#include <stdio.h>

int main(){
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num % 5 == 0)
		printf("\nO numero %d e divisivel por 5.", num);
	else
		printf("\nO numero %d nao e divisivel por 5", num);
	return(0);
}

/*ideia de app*/
