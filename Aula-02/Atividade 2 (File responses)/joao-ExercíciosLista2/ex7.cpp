#include <stdio.h>
#include <stdlib.h>

void trocar(int *valor1, int *valor2) {
	int aux;
	
	aux = *valor2;
	*valor2 = *valor1;
	*valor1 = aux;
	
}

int main () {
	
	int valor1;
	int valor2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%d", &valor2);
	
	printf("Os valores antes da troca eram: valor1 = %d, valor2 = %d", valor1, valor2);
	
	trocar(&valor1, &valor2);
	
	printf("\nOs valores depois da troca sao: valor1 = %d, valor2 = %d", valor1, valor2);
	
	return 0;
}


