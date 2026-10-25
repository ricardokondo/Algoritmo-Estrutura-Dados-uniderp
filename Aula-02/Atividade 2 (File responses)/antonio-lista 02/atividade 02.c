/*Declare uma variável inteira com valor 25 e um ponteiro que armazene o endereço dessa
variável.
O programa deverá apresentar:
? o valor da variável;
? o endereço da variável;
? o endereço armazenado plo ponteiro;
? o valor acessado através do ponteiro.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	int x = 25;
	int *ptr;
	ptr = &x;
	printf ("Valor de X eh:%d ", x);
	printf ("\nO endereco de X eh:%d ", &x);
	printf ("\n========================\n");
	printf ("\nEndereco armazenado pelo ponteiro: %d", &ptr);
	printf ("\nValor acessado por intermedio do ponteiro: %d", *ptr);
	 
	return 0;
	
	
}
