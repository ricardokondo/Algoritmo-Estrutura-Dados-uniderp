#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int var = 10;
	int *ptr1 = &var;
	
	printf("Antes da troca da variavel, o valor era: %d", var);
	*ptr1 = 50;
	
	printf("\nDepois da troca da variavel, o valor era: %d", var);
	
	return 0;
}
