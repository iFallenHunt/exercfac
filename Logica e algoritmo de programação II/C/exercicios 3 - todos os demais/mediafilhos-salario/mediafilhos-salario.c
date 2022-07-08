#include <stdio.h>

int main (){
	
	int filhos, npessoas;
	float salario, somas, somaf, msalario;
	npessoas = 0;
	somas = 0;
	msalario = 0;
	
	printf("Informe o salário: ");
	scanf("%f", &salario);
	
	while (salario != -1){
		printf("informe numero de filhos: ");
		scanf("%d", &filhos);
		npessoas++;
		if (salario > msalario)
		msalario = salario;
		somaf = somaf + filhos;
		somas = somas + salario;
		printf("informe o salario: ");
		scanf("%f", &salario);
	}
	printf("A media de Salario é: %.2f\n", somas/npessoas);
	printf("A media de filhos é: %.2f\n", somaf/npessoas);
	printf("O maior salario é: %.2f\n", msalario);
}