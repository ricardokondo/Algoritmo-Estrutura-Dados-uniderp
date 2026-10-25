//exercícios 2, 4, 7 e 8 .

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

    Retangulo ret;
    ret.largura = 10.0;
    ret.altura = 5.0;

    printf("=== Antes de dobrar ===\n");
    printf("Largura: %.2f\n", ret.largura);
    printf("Altura: %.2f\n", ret.altura);


    dobrarDimensoes(&ret);

    printf("\n=== Depois de dobrar ===\n");
    printf("Largura: %.2f\n", ret.largura);
    printf("Altura: %.2f\n", ret.altura);

    return 0;
}
