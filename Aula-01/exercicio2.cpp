// Desenvolva um programa que leia três notas de um estudante e calcule sua média aritmética. A média deve ser apresentada com duas casas decimais.
// Exemplo:
//   Nota 1: 8.0
//   Nota 2: 7.5
//   Nota 3: 9.0
//  Saída:
//   Media = 8.17

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    // Solicita ao usuário as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média aritmética
    media = (nota1 + nota2 + nota3) / 3;

    // Exibe a média com duas casas decimais
    printf("\nMedia = %.2f\n", media);

    return 0;
}