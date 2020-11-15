//Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.
//Na sequência, leia uma lista de 10 números inteiros 
//e verifique se cada um deles está contido em alguma posição do vetor. 
//Em caso positivo, mostre a posição do vetor em que ele se encontra.

#include<stdio.h>

int main(){
	 
	const int tam_vet=10, tam_lista=5;
	int vet[tam_vet], posicao, numero, verificar, achou;
	
	printf("Digite os dados do vetor: \n"); 
	
	for(posicao=0;posicao<tam_vet;posicao++){
		scanf("%d", &vet[posicao]);
	}
	
	printf ("\n Digite numeros a procurar: \n");
	
	for(posicao=1;posicao<=tam_lista;posicao++){
		scanf("%d", &numero);
		
		// verifica se o numero está no vetor
		
		verificar=0;
		achou=0; //não achou
				
		while(verificar<=tam_vet-1 && achou==0){
			if(numero==vet[verificar]){
				achou=1;
			}else{
				verificar++;	
			} 
		}
		
		if(achou==1){
			printf("\nEncontrado na posicao: %d\n", verificar);
		}else{
			printf("\nNão encontrado\n");
		}
	}
}
