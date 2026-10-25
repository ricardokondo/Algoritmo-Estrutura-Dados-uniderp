#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("\n--- Informacoes fornecidas ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}
