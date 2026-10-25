// Desenvolva um programa em Linguagem C que solicite ao usuário as seguintes informações:
// Nome;
// Idade;
// Altura.Após a leitura dos dados, o programa deverá exibir uma mensagem apresentando todas as informações fornecidas.Exemplo de entrada
//  Nome : Carlos
//  Idade : 20
// Altura : 1.75
#include <stdio.h>

int main()
{
    char nome[50];
    int idade;
    float altura;

    // Solicita ao usuário as informações
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin); // Lê o nome com espaços

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    // Exibe as informações fornecidas
    printf("\nInformações fornecidas:\n");
    printf("Nome: %s", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}