#include<stdio.h>

int Fatorial(int x){
	int i, fat;
	
	if (x == 0)
		return 1; 
	else 
		return x * Fatorial(x-1);	
}
int main(){
	int n, resultado;
	
	printf("informe o numero: ");
	scanf("%d", &n);
	resultado = Fatorial(n);
	printf("O Fatorial e: %d", resultado);
}
   