#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float largura;
    float altura;
} Retangulo;

void dobrarDimensoes(Retangulo *r);

int main()
{
    Retangulo retangulo1;
    Retangulo *ptr;
    ptr = &retangulo1;
    printf("Informe a largura do retangulo: ");
    scanf("%f", &retangulo1.largura);
    printf("Informe a altura do retangulo: ");
    scanf("%f", &retangulo1.altura);
    printf("Valores previos\n - largura: %.2f\n- altura: %.2f\n", retangulo1.largura, retangulo1.altura);
    dobrarDimensoes(ptr);
    printf("Valores apos\n - largura: %.2f\n- altura: %.2f", retangulo1.largura, retangulo1.altura);
    return 0;
}

void dobrarDimensoes(Retangulo *r){
    (*r).largura *= 2;
    (*r).altura *= 2;
}