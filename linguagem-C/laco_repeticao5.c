#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont;
	float salario, porcentagem_reajuste, salario_reajustado, maior;
	maior=0;
	
	printf("Insira o percentual de reajuste: \n");
	scanf("%f", &porcentagem_reajuste);
	
	for(cont=1; cont<=2; cont++){
				
		printf("\nInsira o salario: \n");
		scanf("%f", &salario);
		
		salario_reajustado=salario+(porcentagem_reajuste*salario/100);
		
		printf("\nO valor do salario reajustado é de: %2.f\n", salario_reajustado);
		
		if(salario_reajustado>maior){
		maior=salario_reajustado;
		}
	}
	
	printf("\nO maior salario reajustado é: %2.f", maior);
	return 0;
}
		
