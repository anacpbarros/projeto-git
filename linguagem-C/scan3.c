#include <stdio.h>

void main(){

char ch;

int idade;

printf("Entre com sua idade e inicial do seu nome:\n");

scanf("%d", &idade);

fflush(stdin);
 
scanf("%c", &ch);

printf("Voce tem %d anos e seu nome comeca com %c\n", idade, ch);

}
