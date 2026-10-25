/*Crie uma função chamada trocar que receba dois números inteiros por referência e troque
os valores armazenados entre eles.*/


#include <stdio.h>
#include <stdlib.h>


int trocarValor(int *a, int *b);

int main()
{    
	int a;
	int b;
	
	printf("\nDigite o valor inicial: ");
	scanf("%d", &a);
	printf("\nDigite o valor final: ");
	scanf("%d", &b);
	
 
	while(a < b){
		printf("\nValor inicial: %d", a);
    	trocarValor(&a, &b); //passar o endereço direto (pois *a é a variavel onde esta guardado o endreco de a
    	printf("\nValor final: %d", a);
	} 
    
    return 0;
}

int trocarValor(int *a, int *b){
	int aux = *a; //armazena o valor apontado por *a em aux
	*a = *b; // atribui o valor apontado por *b ao local apontado por *a
	*b = aux; // atribui o valor armazenado em aux no local apontado por b
	return *a;
}
