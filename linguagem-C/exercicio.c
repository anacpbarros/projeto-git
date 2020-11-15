#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char main(){
	char palindromeStr[], array;
	int i, f;
	f=i+1;
	
	printf("Insira um palíndromo de 4 letras:\n");
	scanf("%c", &palindromeStr);
	
	char array[] = palindromeStr.split("%c");
	
	for(i=0; i<=3; i++){
		if(i!=f){
			array[f]= array[f]-1;
		}
	}
	printf("O palíndromo alfabeticamente menor é: "%c", );
	
	
	
