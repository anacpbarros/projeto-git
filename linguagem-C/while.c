#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	while(num!=0){
		
		printf("\nO numero lido foi: %d \n\n", num);
		printf("\nDigite um numero: \n");
		scanf("%d", &num);
	}
	return 0;
}
