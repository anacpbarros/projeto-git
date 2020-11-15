#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int i, k, lista[5] = {4,6,3,9,2};
	bool existe = false;
	
	printf("\nHá uma lista de 5 números inteiros.\n Insira um número de 1 a 10 e saiba se ele pertence a essa lista:\n");
	scanf("%d", &k);
	
	for(i=0; i<=4; i++){
		//printf("%d\n", lista[i]);
		if(k == lista[i]){
			existe = true;
		}
		
		
	}
	
	if(existe){
			printf("\nYES\n");
		}else{
			printf("\nNO\n");
		}
	
	main();	
}
