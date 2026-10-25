#include <stdio.h>

int main() {
    const int NUM_LADOS = 4;
    const float CM_PARA_METRO = 0.01;

    float comprimento, largura, perimetro, perimetroMetros;

    printf("Digite o comprimento do retangulo em cm: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do retangulo em cm: ");
    scanf("%f", &largura);

    if (comprimento <= 0 || largura <= 0) {
        printf("Os valores devem ser positivos.\n");
    } else {
        perimetro = 2 * (comprimento + largura);
        perimetroMetros = perimetro * CM_PARA_METRO;

        printf("\nNumero de lados: %d\n", NUM_LADOS);
        printf("Perimetro: %.2f cm\n", perimetro);
        printf("Perimetro: %.2f metros\n", perimetroMetros);
    }

    return 0;
}
