#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num!=0){
			printf("O numero e igual a: %d\n\n", num);
		}
	}
	while(num!=0);
	return 0;
}

/*
int num;
printf ("Digite um número: ");
scanf("%d",&num);
while (num!=0)   
{printf ("O númerolido foi = %d\n\n ",num);
printf ("Digite um número: ");
scanf("%d",&num);}
*/
