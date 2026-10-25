#include <stdio.h>

typedef struct {
    float largura;
    float altura;
} Retangulo;

void dobrarDimensoes(Retangulo *r) {
    r->largura = r->largura * 2;
    r->altura = r->altura * 2;
}

int main() {

    Retangulo x;

    printf("Digite o valor da largura do seu retangulo: \n");
    scanf("%f", &x.largura);

    printf("Digite o valor da altura do seu retangulo: \n");
    scanf("%f", &x.altura);

    // antes da troca
    printf("\nANTES DA TROCA:\n");
    printf("Largura = %.2f\n", x.largura);
    printf("Altura = %.2f\n", x.altura);

    dobrarDimensoes(&x);

    // depois da troca
    printf("\nDEPOIS DA TROCA:\n");
    printf("Largura = %.2f\n", x.largura);
    printf("Altura = %.2f\n", x.altura);

    return 0;
}

