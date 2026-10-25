#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 10;
	int *ponteiro = &a;
	
	printf("Antes da troca o valor eh: %d\n\n", a);
	*ponteiro = 50;
	printf("Depois da troca o valor eh %d\n", a);
	
	return 0;
}
