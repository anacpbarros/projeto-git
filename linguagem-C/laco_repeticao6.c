#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont, n, num, somapar, somaimpar;
	somapar=0;
	somaimpar=0;
	
	printf("Digite quantos numeros terao na lista: \n");
	scanf("%d", &n);
	
	for(cont=1; cont<=n; cont++){
		printf("\nDigite um numero:\n");
		scanf("%d", &num);
		
		if(num%2==0){
			somapar=somapar+num;
		}else{
			somaimpar=somaimpar+num;
		}
	}
	printf("\nA soma dos numeros pares da lista e: %d \n", somapar);
	printf("\nA soma dos numeros impares da lista e: %d \n", somaimpar);
	return 0;
}                                                                                                                                                                                                                                                                         
