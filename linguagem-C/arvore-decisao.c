#include <stdio.h>

int main (){
	int cadastrado, ativo, logado;
	char opcao;
	
	printf("Deseja cadastrar sua conta? S/N \n");
	scanf(" %c", &opcao);    //o espa�o antes do %c funciona como o fflush(stdin)
	 
	if(opcao == 'S'){
		cadastrado = 1;
	 	printf("\n Sua conta foi cadastrada.\n");
	}
	
	printf("Deseja ativar sua conta? S/N \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		ativo = 1;
		printf("\n Sua conta foi ativada.\n";)
	} 
	 
	printf("Deseja logar sua conta? S/N \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S');
		logado = 1;
		printf("\n Sua conta foi logada")
}
