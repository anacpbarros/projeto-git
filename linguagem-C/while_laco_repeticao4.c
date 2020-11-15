#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont=1;
	float nota1, nota2, nota3, media;
			
	while(cont<=40){
		printf("Insira a primeira nota: \n");
		scanf(" %f", &nota1);
		printf("Insira a segunda nota: \n");
		scanf(" %f", &nota2);
		printf("Insira a terceira nota: \n");
		scanf(" %f", &nota3);
				
		media=(nota1+nota2+nota3)/3;
		
		if(media>=7){
			printf("\nO aluno foi aprovado com média: %.2f.\n", media);
		}else{
			printf("\nO aluno foi reprovado com média: %.2f.\n", media);
		}
		cont++;
	} 
	return 0;
}
