#include <stdio.h>

int main(void) {
    double nota1, nota2, nota3;
    double media;

    printf("Digite a primeira nota: ");
    if (scanf("%lf", &nota1) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite a segunda nota: ");
    if (scanf("%lf", &nota2) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite a terceira nota: ");
    if (scanf("%lf", &nota3) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    media = (nota1 + nota2 + nota3) / 3.0;
    printf("Media = %.2f\n", media);

    return 0;
}
