#include <stdio.h>

int main()
{

	int num, i, fat;
	
	printf("Informe o numero: ");
	scanf("%d", &num);
	fat = 1;
	for (i=1; i <= num; i++)
		fat = fat * i;
	printf("O fatorial é: %d\n", fat);
}