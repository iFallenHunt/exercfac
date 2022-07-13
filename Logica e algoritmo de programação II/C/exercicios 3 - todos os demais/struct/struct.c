#include <stdio.h>
#include <windows.h>

int main()
{
	struct fichaAluno
	{
		char nome[50];
		char disciplina[30];
		float nota1;
		float nota2;
		
	};
		
	struct fichaAluno aluno;
	
	printf("\n-------------- Cadastro de Aluno --------------\n\n\n");
	
	printf("Nome do aluno .......: ");
	fflush(stdin);
	fgets(aluno.nome, 40, stdin);
	
	printf("Diciplina ...........: ");
	fflush(stdin);
	fgets(aluno.disciplina, 40, stdin);
	
	printf("Informe a 1a. nota ..: ");
	fflush(stdin);
	scanf("%f", &aluno.nota1);
	
	printf("Informe a 2a. nota ..: ");
	fflush(stdin);
	scanf("%f", &aluno.nota2);
	system("cls");

	printf("\n\n--------- Lendo os dados da Struct ---------\n\n");
	
	printf("Nome do aluno ..: %s", aluno.nome);
	printf("Diciplina ......: %s", aluno.disciplina);
	printf("1a. nota .......: %.2f\n", aluno.nota1);
	printf("2a. nota .......: %.2f\n", aluno.nota2);
}