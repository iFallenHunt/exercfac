#include <stdio.h>

int main(){
	
	float salario, sal_fim, aumento;
	int cod;
	
	printf("Digite o codigo do funcionario: ");
	scanf("%d", &cod);
	printf("Digite o salario atual: ");
	scanf("%f", &salario);
	
	switch (cod){
		case 1:
			aumento = salario * 0.4;
			sal_fim = aumento + salario;
			printf("O Servente teve um aumento de %.2f e agora o salario e: %.2f", aumento, sal_fim);
			break;
		case 2:
			aumento = salario * 0.35;
			sal_fim = aumento + salario;
			printf("O Pedreiro teve um aumento de %.2f e agora o salario e: %.2f", aumento, sal_fim);
			break;
		case 3:
			aumento = salario * 0.2;
			sal_fim = aumento + salario;
			printf("O Mestre de obras teve um aumento de %.2f e agora o salario e: %.2f", aumento, sal_fim);
			break;
		case 4:
			aumento = salario * 0.10;
			sal_fim = aumento + salario;
			printf("O Tecnico de seguranca teve um aumento de %.2f e agora o salario e: %.2f", aumento, sal_fim);
			break;
	}
}