#include<stdio.h>
#include<stdlib.h>

int main(){
	char letra;
	int cont_a=0, cont_e=0, cont_i=0, cont_o=0, cont_u=0;
	
	printf("Insira uma letra minuscula de a-z e tecle ENTER.\n Quando terminar, tecle '.': \n");
	scanf("%c", &letra);
	
	while(letra!='.'){
		switch (letra){
			case 'a':
				cont_a++; break;
			case 'e':
				cont_e++;break;
			case 'i':
				cont_i++;break;
			case 'o':
				cont_o++;break;
			case 'u':
				cont_u++;break;
		}
		scanf("%c",&letra);
	}
	printf("\nTotal de a: %d \n",cont_a);
	printf("Total de a: %d \n",cont_e);
	printf("Total de a: %d \n",cont_i);
	printf("Total de a: %d \n",cont_o);
	printf("Total de a: %d \n",cont_u);
	return 0;
}
	

