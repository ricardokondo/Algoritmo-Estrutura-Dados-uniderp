#include <stdio.h>

int main() {

    const int quantidadeLados = 4;
    const float conversaoCmParaM = 0.01;

    float comprimento;
    float largura;
    float perimetroCm;
    float perimetroM;

    printf("Digite o comprimento do retângulo em cm: \n");
    scanf("%f", &comprimento);

    printf("Digite a largura do retângulo em cm: \n");
    scanf("%f", &largura);

    if (comprimento > 0 && largura > 0) {

        perimetroCm = 2 * (comprimento + largura);
        perimetroM = perimetroCm * conversaoCmParaM;

        printf("Lados do retângulo: %d\n", quantidadeLados);
        printf("Perímetro do retângulo: %.2f cm\n", perimetroCm);
        printf("Perímetro convertido: %.2f m\n", perimetroM);

    } else {

        printf("Os valores do comprimento e da largura devem ser maiores que zero!\n");
    }

    return 0;
}