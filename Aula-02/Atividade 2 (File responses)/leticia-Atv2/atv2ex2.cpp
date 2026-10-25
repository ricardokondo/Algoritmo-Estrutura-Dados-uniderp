/*Declare uma variável inteira com valor 25 e um ponteiro que armazene o endereço dessa
variável.
O programa deverá apresentar:
- o valor da variável;
- o endereço da variável;
- o endereço armazenado pelo ponteiro;
- o valor acessado através do ponteiro.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 25;
    int *ptr;
    
    ptr = &x; //& = endereco
    
    printf("\nO valor de x: %d", x);
    printf("\nO endereco de x: %d", ptr);
    
    printf("\nO conteudo armazenado no ponteiro = %d ", ptr); //ptr(endereco de x) 
    printf("\nConteudo do local onde o ponteiro aponta = %d ", *ptr); // valor armazenado no endereco 
	//apontado por ptr (valor de x)

    return 0;

}
