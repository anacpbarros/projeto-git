#include<stdio.h>
#include<stdlib.h>

//desenvolva um programa que leia o sal�rio de 10 funcion�rios de uma empresa, 
//calcule e mostre o maior sal�rio e a m�dia salarial da empresa.

int main(){
	int cont;
	float salario,maior,soma,media;
	maior=0; 
	soma=0;
		
	for(cont=1; cont<=10; cont++){
		
		printf("Digite o salario: \n");
		scanf("%f", &salario);
		
		soma=soma+salario;
		
		if(salario>maior){
			 maior = salario;
		}	
	}
	media=soma/5;
	printf("O maior salario da empresa �: %.2f \n", maior);
	printf("A m�dia salarial da empresa �: %.2f \n", media);
	return 0;	
}

