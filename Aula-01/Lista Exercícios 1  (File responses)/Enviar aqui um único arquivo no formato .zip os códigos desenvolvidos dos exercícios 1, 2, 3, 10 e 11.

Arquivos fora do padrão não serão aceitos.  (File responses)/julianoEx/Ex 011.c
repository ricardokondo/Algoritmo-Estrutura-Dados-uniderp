#include <stdio.h>

int main() {
    const int NUMERO_LADOS = 4;
    const float CENTIMETROS_PARA_METROS = 0.01;

    float comprimento, largura, perimetro_cm, perimetro_m;

    printf("Digite o comprimento do retangulo (em cm): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do retangulo (em cm): ");
    scanf("%f", &largura);

    if (comprimento <= 0 || largura <= 0) {
        printf("\nErro: Os valores de comprimento e largura devem ser positivos (maiores que zero).\n");
    } else {
        perimetro_cm = 2 * (comprimento + largura);

        perimetro_m = perimetro_cm * CENTIMETROS_PARA_METROS;

        printf("\n--- Resultados ---\n");
        printf("Numero de lados considerado: %d\n", NUMERO_LADOS);
        printf("Perimetro: %.2f cm\n", perimetro_cm);
        printf("Perimetro em metros: %.2f m\n", perimetro_m);
    }

    return 0;
}
