// Desenvolva um programa que leia dez números inteiros e os armazene em um vetor.
// Ao final, informe :
//  - quantidade de números pares;
//  - quantidade de números ímpares.
// Exemplo
//     Considerando :
//          2 7 8 5 10 3 6 9 12 15
//     Saída :
//         Quantidade de pares : 5
//         Quantidade de impares : 5

#include <stdio.h>

int main()
{
    int vetor[10];
    int i, quantidade_pares = 0, quantidade_impares = 0;

    // Ler dez números
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Contar a quantidade de números pares e ímpares
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            quantidade_pares++;
        }
        else
        {
            quantidade_impares++;
        }
    }

    // Apresentar a quantidade de números pares e ímpares
    printf("Quantidade de pares: %d\n", quantidade_pares);
    printf("Quantidade de impares: %d\n", quantidade_impares);

    return 0;
}