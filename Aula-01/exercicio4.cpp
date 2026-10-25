// Faça um programa que leia a média final de um estudante.
// Considere:
//  média maior ou igual a 7: Aprovado;
//  média maior ou igual a 5 e menor que 7: Exame;
//  média menor que 5: Reprovado.
// Exemplo
// Entrada:
//  Média entrada: 6.5
//
// Saída:
//  Situacao: Exame

#include <stdio.h>

int main()
{
    float media;

    // Solicita ao usuário a média final do estudante
    printf("Digite a média final do estudante: ");
    scanf("%f", &media);

    // Determina a situação do estudante com base na média
    if (media >= 7.0)
    {
        printf("Situacao: Aprovado\n");
    }
    else if (media >= 5.0)
    {
        printf("Situacao: Exame\n");
    }
    else
    {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}