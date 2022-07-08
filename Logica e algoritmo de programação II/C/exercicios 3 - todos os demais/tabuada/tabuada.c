#include<stdio.h>

int main(){
	int valor, i, j;
	for (i = 1; i <= 10; i++)
	{
		printf("Tabuada do %d", i);
		for (j = 1; j <= 10; j++)
		{
			valor = i*j;
			printf("\n%d x %d = %d", i, j, valor);
		}
	}
}