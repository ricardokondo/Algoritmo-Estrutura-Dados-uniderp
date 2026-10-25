/*3) Crie uma variável inteira inicialmente com valor 10.
Crie um ponteiro que aponte para essa variável e, utilizando apenas o ponteiro, altere o valor
da variável para 50.
Apresente o valor antes e depois da alteração.*/

#include <stdio.h>
#include <stdlib.h>


void trocarValor();

int main()
{    
	int a = 10;
	int b = 50;
 
	while(a < b){
		printf("\nO valor inicial: %d", a);
    	trocarValor(&a, &b); //passar o endereço direto (pois *a é a variavel onde esta guardado o endreco de a
    	printf("\nO valor final: %d", a);
	} 
    
    return 0;
}

void trocarValor(int *a, int *b){
	int aux = *a; //armazena o valor apontado por *a em aux
	*a = *b; // atribui o valor apontado por *b ao local apontado por *a
	*b = aux; // atribui o valor armazenado em aux no local apontado por b
}
