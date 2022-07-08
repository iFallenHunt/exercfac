#include <stdio.h>
int main(){
	
	int op;
	float total;
	total = 0;

	printf("1 - Italiano 2 - Japones 3 - Salvadorenho\n	");
	
	printf("Informe o prato desejado: ");
	scanf("%d", &op);
	
	switch (op)
	{
	case 1: total = total + 750;
	break;
	case 2: total = total + 324;
	break;
	case 3: total = total + 545;
	break;
	}
	printf("1 - Cha 2 - Suco de laranja 3 -	Refrigerante: ");
	printf("Informe a bebida desejada: ");
	scanf("%d", &op);
	switch (op)
	{
	case 1: total = total + 30;
	break;
	case 2: total = total + 80;
	break;
	case 3: total = total + 90;
	break;
	}
	printf ("O total de calorias e: %.2f \n", total);
	return (0);
}