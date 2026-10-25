/**
 * Maior e menor valor.
 * Crie dinamicamente um vetor de n números reais (float).
 * Depois de preencher o vetor, encontre e mostre o maior e o menor valor armazenado.

 */

#include <stdio.h>
#include <stdlib.h>

// funcao preencheVetor: preenche o vetor com n números reais fornecidos pelo usuário
void preencheVetor(float *vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

// funcao encontraMaiorMenor: encontra o maior e o menor valor no vetor
void encontraMaiorMenor(float *vetor, int n, float *maior, float *menor)
{
    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 1; i < n; i++)
    {
        if (vetor[i] > *maior)
        {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor)
        {
            *menor = vetor[i];
        }
    }
}

// funcao main: ponto de entrada do programa
int main()
{
    int n;
    float maior, menor;

    printf("Digite a quantidade de números: ");
    scanf("%d", &n); // Lê a quantidade de números

    // Aloca dinamicamente um vetor de n números reais (float)
    float *vetor = (float *)malloc(n * sizeof(float));
    if (vetor == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1; // Sai do programa em caso de erro na alocação
    }

    preencheVetor(vetor, n); // Preenche o vetor com os valores fornecidos pelo usuário

    encontraMaiorMenor(vetor, n, &maior, &menor);
    // Mostra o maior e o menor valor armazenado
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    free(vetor); // Libera a memória utilizada

    return 0;
}