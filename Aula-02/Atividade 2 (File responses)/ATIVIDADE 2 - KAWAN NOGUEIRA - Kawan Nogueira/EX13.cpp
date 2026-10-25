#include <stdio.h>

void mm(int v[], int n, int *minimo, int *maximo){
	
	*minimo = v[0];
	*maximo = v[0];
	for(int i = 1; i<n; i++){
		if(v[i] < *minimo){
			*minimo = v[i];
		}
		if (v[i] > *maximo){
			*maximo = v[i];
		}
	}
}

int main() {
    int vetor[5] = {10, 5, 23, 8, 15};
    int tamanho = 5;
    int menor;
    int maior;

    mm(vetor, tamanho, &menor, &maior);

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    return 0;
}
