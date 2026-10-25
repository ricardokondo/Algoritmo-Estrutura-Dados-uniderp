#include <stdio.h>

int main(void) {
    double media;

    printf("Digite a media final do estudante: ");
    if (scanf("%lf", &media) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 5.0) {
        printf("Situacao: Exame\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
