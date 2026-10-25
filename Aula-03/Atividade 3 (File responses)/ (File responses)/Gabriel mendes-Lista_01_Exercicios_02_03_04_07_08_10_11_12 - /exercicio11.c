#include <stdio.h>

int main(void) {
    const int NUMERO_DE_LADOS = 4;
    const double CENTIMETROS_PARA_METROS = 0.01;
    double comprimento, largura;
    double perimetroCentimetros, perimetroMetros;

    printf("Digite o comprimento do retangulo em centimetros: ");
    if (scanf("%lf", &comprimento) != 1 || comprimento <= 0) {
        printf("O comprimento deve ser um valor positivo.\n");
        return 1;
    }

    printf("Digite a largura do retangulo em centimetros: ");
    if (scanf("%lf", &largura) != 1 || largura <= 0) {
        printf("A largura deve ser um valor positivo.\n");
        return 1;
    }

    perimetroCentimetros = (NUMERO_DE_LADOS / 2.0) *
                           (comprimento + largura);
    perimetroMetros = perimetroCentimetros * CENTIMETROS_PARA_METROS;

    printf("Perimetro = %.2f cm\n", perimetroCentimetros);
    printf("Perimetro = %.2f m\n", perimetroMetros);

    return 0;
}
