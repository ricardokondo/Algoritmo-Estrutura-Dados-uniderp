#include <stdio.h>
typedef struct
{
    float largura, altura;
} Retangulo;
void dobrarDimensoes(Retangulo *r)
{
    r->largura *= 2;
    r->altura *= 2;
}
int main()
{
    Retangulo r;
    scanf("%f", &r.largura);
    scanf("%f", &r.altura);
    dobrarDimensoes(&r);
    printf("Largura: %.2f\nAltura: %.2f", r.largura, r.altura);
    return 0;
}