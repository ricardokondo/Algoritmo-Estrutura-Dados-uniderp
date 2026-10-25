/*Crie uma variável inteira inicialmente com valor 10.
Crie um ponteiro que aponte para essa variável e, utilizando apenas o ponteiro, altere o valor
da variável para 50.
Apresente o valor antes e depois da alteração.*/

#include <stdio.h>

	
	

int main () {
	int x = 10;
	int *p1 = &x;
	
	printf (" Antes da troca o valor de X eh: %d\n", x);
	*p1 = 50;
	printf ("Depois da troca o valor de X agora eh: %d\n", x);
	
	return 0;
}
