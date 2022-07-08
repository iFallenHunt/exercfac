#include<stdio.h>
#include<stdlib.h>
#define TAM 10

struct agenda{
	char nome[50];
	char telefone[20];
	char email[30];
};
int main(){
	struct agenda contato[TAM];
	char nomebusca[30];
	char  resp;
	int  acha, i;
	
	for (i = 0; i <= TAM; i++)
	{
		printf("Informe nome do contato: ");
		scanf("%s", &contato[i].nome);
		fflush(stdin);
		
		printf("Informe telefone do contato: ");
		scanf("%s", &contato[i].telefone);
		fflush(stdin);
		
		printf("Informe o E-mail do contato: ");
		scanf("%s", &contato[i].email);
		fflush(stdin);		
		
		while (resp == "s"){
			prinft("Informe o nome a ser pesquisado:");
			scanf("%s", &nomebusca);
			i = 1;
			while ((i < TAM) && (acha = 0)){
				if (contato[i].nome = nomebusca)
					acha = 1;
				else
					i = i + 1;
				}
			if (acha = 3){
				printf("O telefone é: ", contato[i].telefone);
			}
			else{
				printf("Nao ha contato com o nome informado");
			}
			}
			prinft("Deseja continuar?");
			scanf("%s", &resp);
		}
	}
