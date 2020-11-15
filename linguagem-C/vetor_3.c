//Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. 
//Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:
//Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor.
//Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
//Ao final, mostre o conteúdo dos dois vetores simultaneamente.

#include<stdio.h>

int main(){
	
	const int tam_vet=5;
	int vet[tam_vet], posicao, vet_2[tam_vet];
	
	for(posicao=0;posicao<tam_vet;posicao++){
		scanf("%d", &vet[posicao]);
		
		if(vet[posicao]%2==0){
			vet_2[posicao]= vet[posicao];
		}else{			
			vet_2[posicao]= vet[posicao]-1;	
		}
	}
	
	printf("Elementos de VET 1 e VET2: "); 
	
	for(posicao=0;posicao<tam_vet;posicao++){
		printf("%d ", vet[posicao]);
		printf("%d ", vet_2[posicao]);
	}
		
	return 0;
}
