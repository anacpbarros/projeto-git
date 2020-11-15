//Faça um programa que leia a nota de 20 alunos da turma 
//e mostre as que são iguais ou superiores à média da turma.

int main(){
	const int tam_vet=5;
	
	float nota[tam_vet], soma=0.0, media;
	int aluno;
	
	for(aluno=0;aluno<tam_vet;aluno++){
		scanf("%f", &nota[aluno]);
		
		soma=soma+nota[aluno];
	}
	
	media=soma/tam_vet;
	
	for(aluno=0;aluno<tam_vet;aluno++){	
		if(nota[aluno]>=media){
			printf("%2.f\n", nota[aluno]);
		}
	}
	return 0;
}
