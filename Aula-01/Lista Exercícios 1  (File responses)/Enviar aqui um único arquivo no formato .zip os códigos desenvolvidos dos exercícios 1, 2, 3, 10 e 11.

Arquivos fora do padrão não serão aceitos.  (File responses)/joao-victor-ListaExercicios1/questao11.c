#include <stdio.h>

int main() {
    const int NUM_LADOS = 4;
    const float CM_PARA_METRO = 0.01f;

    float comprimento, largura, perimetro;

    printf("Comprimento do retangulo (cm): ");
    scanf("%f", &comprimento);

    printf("Largura do retangulo (cm): ");
    scanf("%f", &largura);

    if (comprimento <= 0 || largura <= 0) {
        printf("Os valores devem ser positivos.\n");
        return 0;
    }

    perimetro = 2 * (comprimento + largura);

    printf("\nNumero de lados: %d\n", NUM_LADOS);
    printf("Perimetro = %.2f cm\n", perimetro);
    printf("Perimetro = %.2f metros\n", perimetro * CM_PARA_METRO);

    return 0;
}
