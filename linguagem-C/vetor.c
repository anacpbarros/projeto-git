//Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos.

#include<stdio.h>
#include<stdlib.h>

int main(void){
	int vet[10], posicao;
	
	for(posicao=0;posicao<10;posicao++){
		scanf("%d", &vet[posicao]);
	}
	for(posicao=9;posicao>=0;posicao--){
		printf("%d\n",vet[posicao]);
	}
	return 0;
}



