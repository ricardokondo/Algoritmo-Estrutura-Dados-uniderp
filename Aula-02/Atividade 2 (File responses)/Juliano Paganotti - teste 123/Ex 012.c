//2,3,7,11,12
#include<stdio.h>
#include<stdlib.h>

void mm(int v[], int n, int *min, int *max) {
    int i; 
    
    *min = v[0];
    *max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int vetor[] = {15, 3, 42, 8, -5, 27, 0};
    int n = 7;
    int minimo, maximo;
    int i; 

    mm(vetor, n, &minimo, &maximo);

    printf("Vetor: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    printf("Menor valor encontrado: %d\n", minimo);
    printf("Maior valor encontrado: %d\n", maximo);

    return 0;
}
