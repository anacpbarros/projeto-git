//Escreva uma fun��o que imprima n�meros de 1 a 100. 
//Para os n�meros m�ltiplos de 3, imprima "Fizz" 
//ao inv�s do n�mero e para n�meros m�ltiplos de 5, imprima "Buzz". 
//Para n�meros que s�o m�ltiplos de 3 E 5, imprima "FizzBuzz".

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
