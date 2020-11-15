#include <stdio.h>

void main(){

char ch1, ch2;

printf("Entre com duas letras:\n");

scanf("%c", &ch1);

fflush(stdin); //entre scanf de ch é necessário adicionar o fflsh para o enter do teclado não ser considerado a próxima variável

scanf("%c", &ch2);

printf("As letras inseridas foram %c e %c.\n", ch1, ch2);

}
