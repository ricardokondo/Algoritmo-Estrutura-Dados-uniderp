#include <stdio.h>

void dobrar(int *valor) {
    *valor = *valor * 2;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Valor antes de dobrar: %d\n", numero);

    dobrar(&numero);

    printf("Valor depois de dobrar: %d\n", numero);

    return 0;
}
