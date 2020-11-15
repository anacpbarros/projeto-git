#include <stdio.h>

int main(){
	int opcao;
	
	printf("Entre com um numero inteiro:\n");
	scanf("%d", &opcao);
	
	//encadeado
	/*if(opcao > 0){
		printf("\nNumero positivo.\n");
	}else if(opcao == 0){
		printf("\nNumero nulo.\n");
	}else{
		printf("\nNumero negativo.\n");
	*/}
	
	//aninhado (mais simplificado)
	if(opcao >= 0){
		if (opcao ==0){
			printf("\nNumero nulo.\n");
		}else{
			printf("\nNumero positivo.\n");
		}
	}else{
		printf("\nNumero negativo.\n");
	}
		
}
