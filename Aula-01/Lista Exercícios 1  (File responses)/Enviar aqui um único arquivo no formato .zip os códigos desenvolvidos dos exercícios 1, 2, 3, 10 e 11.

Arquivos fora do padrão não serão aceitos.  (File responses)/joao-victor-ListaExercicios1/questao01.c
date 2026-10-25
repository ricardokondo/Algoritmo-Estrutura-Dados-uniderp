#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float altura;

    printf("Nome: ");
    scanf(" %99[^\n]", nome);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%f", &altura);

    printf("\nInformacoes:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}
