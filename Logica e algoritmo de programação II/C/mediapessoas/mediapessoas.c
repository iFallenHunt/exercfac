#include <stdio.h>

int main()
{
	int idade, npessoas;
	float altura, somaa, somai;
	char sexo;
	
	somaa = 0;
	somai = 0;
	npessoas = 0;
	
	printf("Informe a idade:");
	scanf("%d", &idade);
		while (idade != 0)
	{
	printf("Informe a altura:\n");
	scanf("%f", &altura);
	npessoas ++;
	somai = somai + idade;
	somaa = somaa + altura;
	printf("Informe a idade:\n");
	scanf("%d", &idade);
	}
	printf("A média de altura é: %.2f\n", somaa/npessoas);
	printf("A média de idade é: %.2f\n", somai/npessoas);
	return (0);
}