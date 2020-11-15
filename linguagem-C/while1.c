#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont=1, num, maior;
	maior=0;
				
	while(0<cont<=5){
		printf("\nDigite um numero: \n");
		scanf(" %d", &num);
						
		if(num>maior){
			maior=num;
		}
			
	cont++;
	} 
	printf("\nO maior numero e: %d\n", maior);
	return 0;
}
