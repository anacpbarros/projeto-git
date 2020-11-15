#include<stdio.h>
#include<stdlib.h>

//desenvolva um programa que leia o salário de 10 funcionários de uma empresa, 
//calcule e mostre o maior salário e a média salarial da empresa.

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
	printf("O maior salario da empresa é: %.2f \n", maior);
	printf("A média salarial da empresa é: %.2f \n", media);
	return 0;	
}

