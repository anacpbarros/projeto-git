//desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, cont, maior;
	maior=0;
		
	for(cont=1; cont<=15; cont++){
		
		printf("Digite um numero:\n");
		scanf("%d", &num);
		
		if(num > maior){
			maior = num;
		}
	}
	
	printf("O maior dos numeros lidos é %d\n", num);
	return 0;
}
