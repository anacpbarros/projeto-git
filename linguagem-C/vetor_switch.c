//Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu.
//O vetor vai armazenar 5 números inteiros. 
//Cada posição do vetor vai acumular a quantidade de vezes que cada vogal (A, E, I, O, U) apareceu. 
//O índice 0 (zero) corresponde ao total de vogais “A”, o índice 1 corresponde à vogal “E”, e assim sucessivamente, 
//até o índice 4, que vai armazenar a vogal “U”.

#include<stdio.h>


int main(){
	char letras; 
	int vogais[5]={0,0,0,0,0},posicao; 
	
	scanf("%c", &letras);
	
	while(letras!='z'){
		switch (letras){
			case 'a':
				vogais[0]++;break;
			case 'e':
				vogais[1]++;break;
			case 'i':
				vogais[2]++;break;
			case 'o':
				vogais[3]++;break;
			case 'u':
				vogais[4]++;break;
		}
		scanf("%c",&letras);
	}
	printf("\nA quantidade de vogais em ordem e: \n");
	
	for(posicao=0;posicao<5;posicao++){
		printf("%d", vogais[posicao]);
	}
	
	return 0;		
}
