/* Crie uma função chamada trocar que receba dois números inteiros por referência e troque
os valores armazenados entre eles.*/

#include <stdio.h>

int Trocar (int *a, int *b) {
	int trc = *a;
	*a = *b;
	*b = trc;
}

int main () {
	
	int x = 10;
	int y = 15;
	
		printf (" Antes da troca o valor de X eh: %d e o valor de Y eh: %d\n", x, y);
	Trocar (&x, &y);
	printf ("Depois da troca o valor de X agora eh: %d e o valor de Y agora eh: %d\n", x, y);
	
	
	return 0;
}
