#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int var = 25;
	int *p = &var;
	
	printf("O valor da variavel eh: %d", var);
	printf("\nO endereco da variavel eh: %d", &var);
	
	printf("\nO endereco da variavel eh: %d", &*p);
	printf("\nO valor da variavel eh: %d", *p);
	

	return 0;
}
