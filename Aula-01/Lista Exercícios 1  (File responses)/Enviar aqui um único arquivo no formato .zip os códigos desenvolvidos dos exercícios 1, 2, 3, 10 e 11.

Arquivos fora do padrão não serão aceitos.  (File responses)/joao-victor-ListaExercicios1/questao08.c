#include <stdio.h>

int main() {
    int n, i, soma = 0;

    printf("Numero: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo.\n");
        return 0;
    }

    printf("Somatorio: ");

    for (i = 1; i <= n; i++) {
        soma += i;
        printf("%d", i);

        if (i < n) {
            printf(" + ");
        }
    }

    printf("\nSoma = %d\n", soma);

    return 0;
}
