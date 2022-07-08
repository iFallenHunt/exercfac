struct cad_agenda {
	char nome [30];
	char telefone [15];
	char email [30];
};
int main (){
	int i;
	int acha;
	char nomebusca[30];
	char respo[3];
	
	
	struct cad_agenda registro[10];
	
	for (i = 0; i <10; i++){
		printf("Informe o nome do contato: ");
		scanf("%s", &registro[i].nome);
		printf("Informe o telefone do contato: ");
		scanf("%s", &registro[i].telefone);
		printf("Informe o e-mail do contato: ");
		scanf("%s", &registro[i].email);
	}
	while (respo == "sim"){
		printf("Informe o nome a ser pesquisado: ");
		scanf("%s", &nomebusca);
		i = 1;
		while (i <= 10) {
			if (registro[i].nome = nomebusca){
				acha = true;
			}else{
				i = i + 1;
			}
		}
		if (acha = true){
			printf("O telefone é: ", registro[i].telefone);
		}else{
			printf("Nao ha contato com o nome informado");
		}
		printf("Deseja continuar a pesquisa? ");
		scanf("%s", &respo);
	}
}
