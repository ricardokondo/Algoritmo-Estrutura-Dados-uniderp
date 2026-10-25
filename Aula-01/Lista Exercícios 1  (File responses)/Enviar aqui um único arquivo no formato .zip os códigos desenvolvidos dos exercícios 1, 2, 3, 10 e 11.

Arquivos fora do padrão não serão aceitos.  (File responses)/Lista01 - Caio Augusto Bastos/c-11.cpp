#include <stdio.h>

#define lados 4
#define fatorConversao 0.01

int main()
{
    
    float largura = 0, comprimento = 0, perimetro = 0;
    printf("Informe o comprimento do retângulo em centímetros: ");
    scanf("%f", &comprimento);
    while(comprimento <= 0){
        printf("\nValor Incorreto, tente novamente.");
        printf("\nInforme o comprimento do retângulo em centímetros: ");
        scanf("%f", &comprimento);
    } 
    printf("\nInforme a largura do retângulo em centímetros: ");
    scanf("%f", &largura);
    while(largura <= 0){
        printf("\nValor Incorreto, tente novamente.");
        printf("\nInforme a largura do retângulo em centímetros: ");
        scanf("%f", &largura);
    } 
    perimetro = 2 * (comprimento + largura);
    printf("\nO perimetro do retângulo é: %.2fcm, ou %.2fm.", perimetro, perimetro * fatorConversao);
    return 0;
}