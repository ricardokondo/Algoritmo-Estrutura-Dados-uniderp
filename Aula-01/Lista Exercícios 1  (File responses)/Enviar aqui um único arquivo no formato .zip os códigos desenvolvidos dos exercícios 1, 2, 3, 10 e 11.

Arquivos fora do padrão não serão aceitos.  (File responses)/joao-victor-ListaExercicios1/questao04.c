#include <stdio.h>

int main() {
    float media;

    printf("Media entrada: ");
    scanf("%f", &media);

    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 5.0) {
        printf("Situacao: Exame\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
