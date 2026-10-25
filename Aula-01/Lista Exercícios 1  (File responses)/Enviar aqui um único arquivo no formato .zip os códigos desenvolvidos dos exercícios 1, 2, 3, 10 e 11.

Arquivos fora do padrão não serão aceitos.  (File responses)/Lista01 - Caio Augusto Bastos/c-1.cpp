#include <stdio.h>

int main()
{
    char nome[50];
    float altura = 0;
    int idade = 0;
    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("\nInforme sua idade: ");
    scanf("%d", &idade);
    printf("\nInforme sua altura: ");
    scanf("%f", &altura);
    printf("\nNome: %sIdade: %d\nAltura: %.2f", nome, idade, altura);
    return 0;
}