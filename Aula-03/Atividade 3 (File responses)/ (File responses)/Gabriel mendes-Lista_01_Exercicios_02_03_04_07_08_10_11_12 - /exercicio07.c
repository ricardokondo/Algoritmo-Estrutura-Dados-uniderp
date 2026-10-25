#include <stdio.h>

int main(void) {
    int numero, multiplicador;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (multiplicador = 1; multiplicador <= 10; multiplicador++) {
        printf("%d x %d = %d\n", numero, multiplicador,
               numero * multiplicador);
    }

    return 0;
}
