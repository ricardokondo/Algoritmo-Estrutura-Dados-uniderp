#include <stdio.h>

int main(void) {
    int numero, contador;
    long long soma = 0;

    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("O numero deve ser um inteiro positivo.\n");
        return 1;
    }

    printf("Somatorio: ");
    for (contador = 1; contador <= numero; contador++) {
        soma += contador;
        printf("%d", contador);

        if (contador < numero) {
            printf(" + ");
        }
    }

    printf("\nSoma = %lld\n", soma);

    return 0;
}
