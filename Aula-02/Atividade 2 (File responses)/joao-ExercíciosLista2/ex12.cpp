#include <stdio.h>
#include <stdlib.h>

void mm(int *min, int *max, int tamanho, int vetor[]) {
	
	*min = vetor[0];
	*max = vetor[0];
	
	for (int i = 0; i < tamanho; i++) {
		
		if (vetor[i] > *max) {
			*max = vetor[i];
		}
		if (vetor[i] < *min) {
			*min = vetor[i];
		}
	}
	
	
}

int main () {
	
	int tamanho = 5;
	int min;
	int max;
	int vetor[5] = {15, 20, 53, 32, 7};
	
	mm(&min, &max, tamanho, vetor);
	
	printf("O menor valor do vetor eh: %d, e o maior valor eh %d", min, max);
	
	return 0;
}


