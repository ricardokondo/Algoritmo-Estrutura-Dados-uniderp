#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float altura;

    printf("Nome: ");
    scanf(" %49[^\n]", nome); 

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%f", &altura);

 
    printf("\n--- Dados Cadastrados ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);

    return 0;
}
