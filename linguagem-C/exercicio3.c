//Escreva uma função que imprima números de 1 a 100. 
//Para os números múltiplos de 3, imprima "Fizz" 
//ao invés do número e para números múltiplos de 5, imprima "Buzz". 
//Para números que são múltiplos de 3 E 5, imprima "FizzBuzz".

#include<stdio.h>
#include<stdlib.h>


int main(){
	int cont;
			
	for(cont=1;cont<=100;cont++){
		printf("%d", &cont);
		
		if(cont%3==0){
			printf("Fizz");
		}else{
			if(cont%5==0){
				printf("Buzz");
			}
		}
		
		if(cont%3==0 && cont%5==0){
			printf("FizzBuzz");
		}
	}
	
	return 0;
}
