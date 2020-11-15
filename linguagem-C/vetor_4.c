//Fa�a um algoritmo que leia 50 n�meros inteiros e armazene-os em um vetor.
//Na sequ�ncia, leia uma lista de 10 n�meros inteiros 
//e verifique se cada um deles est� contido em alguma posi��o do vetor. 
//Em caso positivo, mostre a posi��o do vetor em que ele se encontra.

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
		
		// verifica se o numero est� no vetor
		
		verificar=0;
		achou=0; //n�o achou
				
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
			printf("\nN�o encontrado\n");
		}
	}
}
