#include <stdio.h>

int main(void) {
    int numero1, numero2;

    printf("Digite o primeiro numero inteiro: ");
    if (scanf("%d", &numero1) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite o segundo numero inteiro: ");
    if (scanf("%d", &numero2) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (numero1 > numero2) {
        printf("%d e maior que %d.\n", numero1, numero2);
    } else if (numero2 > numero1) {
        printf("%d e maior que %d.\n", numero2, numero1);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
