#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont;
	float nota1, nota2, nota3, media;
			
	for(cont=1; cont<=40; cont++){
		printf("Insira a primeira nota: \n");
		scanf(" %f", &nota1);
		printf("Insira a segunda nota: \n");
		scanf(" %f", &nota2);
		printf("Insira a terceira nota: \n");
		scanf(" %f", &nota3);
				
		media=(nota1+nota2+nota3)/3;
		
		if(media>=7){
			printf("\nO aluno foi aprovado com m�dia: %.2f.\n", media);
		}else{
			printf("\nO aluno foi reprovado com m�dia: %.2f.\n", media);
		}
	} return 0;
}
