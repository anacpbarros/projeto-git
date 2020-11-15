#include <stdio.h>

int main(){
	int opcao;
	
	printf("Entre com 1- para adicionar e 2- para excluir: \n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1: {
			printf("\nAdicionar\n");
			break;
		}
		
		case 2: {
			printf("\nExcluir\n");
			break;
		}
		default: printf("\nOpção Invávida\n");
		
		}
	
	printf("\nFinal do Programa\n");
		
	}
