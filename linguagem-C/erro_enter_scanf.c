#include <stdio.h>

void main(){

char ch1, ch2;

printf("Entre com duas letras:\n");

scanf("%c", &ch1);

fflush(stdin); //entre scanf de ch � necess�rio adicionar o fflsh para o enter do teclado n�o ser considerado a pr�xima vari�vel

scanf("%c", &ch2);

printf("As letras inseridas foram %c e %c.\n", ch1, ch2);

}
