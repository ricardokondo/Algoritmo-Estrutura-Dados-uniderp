/*Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de duas
variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor de um elemento
mínimo e o valor de um elemento máximo do vetor.
Escreva também uma função main que use a função mm.*/


#include <stdio.h>

void mm(int v[], int n, int *min, int *max) {

    *min = v[0];
    *max = v[0];

    for (int i = 1; i < n; i++) {

        if (v[i] < *min) {
            *min = v[i];
        }

        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {

    int v[5] = {10, 5, 30, 2, 15};
	int n = 5;

    int min;
    int max;

    mm(v, n, &min, &max);

    printf("Menor valor: %d\n", min);
    printf("Maior valor: %d\n", max);

    return 0;
}

