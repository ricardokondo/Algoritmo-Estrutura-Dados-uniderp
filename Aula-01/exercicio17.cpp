// Desenvolva um programa que armazene cinco números inteiros em um vetor
// e determine qual é o maior valor informado.
// Exemplo
//     Entrada :
//     10 7 25 4 18
//     Saída :
//        Maior valor : 25

#include <stdio.h>

// funcao de comparacao para determinar o maior valor em um vetor
int verifica_maior(int vetor[], int tamanho)
{
    int maior = vetor[0]; // Inicializa o maior valor com o primeiro elemento do vetor

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i]; // Atualiza o maior valor se encontrar um valor maior
        }
    }

    return maior; // Retorna o maior valor encontrado
}

int main()
{
    int vetor[5];
    int i, maior;

    // Ler cinco números
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa o maior valor com o primeiro elemento do vetor
    maior = vetor[0];

    // Chama a função para verificar o maior valor
    maior = verifica_maior(vetor, 5);

    // Apresentar o maior valor
    printf("Maior valor: %d\n", maior);

    return 0;
}