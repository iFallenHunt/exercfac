#include <stdio.h>

int main(){
	int pedido, qtdade;
	float preco, total;
	char data[10];
	
	total = 0;
	
	printf("Informe o numero do pedido: ");
	scanf("%d", &pedido);
	
	while (pedido != 0){
		printf("\nInforme a data: ");
		scanf("%s", &data);
		
		printf("\nInfome o preço unitario: ");
		scanf("%f", &preco);
		
		printf("\nInforme a quantidade: ");
		scanf("%d", &qtdade);
		
		total = total + (preco * qtdade);
		printf("\nO valor da compra é: %.2f\n", preco*qtdade);
		printf("Informe o numero do novo pedido ou 0 para finalizar: ");
		scanf("%d", &pedido);
	}
	printf("O total da compra é: %.2f", total);
}