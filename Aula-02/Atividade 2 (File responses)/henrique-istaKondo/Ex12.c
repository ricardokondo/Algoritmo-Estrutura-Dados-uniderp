#include <stdio.h>

#define MAX 100

void mm(int v[], int n, int *min, int *max) {
    int i;

    *min = v[0];
    *max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i]
        }
    }
}

int main() {
    int v[MAX];
    int n, i;
    int minimo, maximo;

    printf("Digite a quantidade de elementos do vetor (max %d): ", MAX);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o elemento [%d]: ", i);
        scanf("%d", &v[i]);
    }

    mm(v, n, &minimo, &maximo);

    printf("Menor valor: %d\n", minimo);
    printf("Maior valor: %d\n", maximo);

    return 0;
}
