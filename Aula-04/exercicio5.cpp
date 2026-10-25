/**
 * Cadastro de alunos com struct
Crie uma estrutura:
typedef struct {
    char nome[50];
    float nota;
} Aluno;
Peça a quantidade de alunos e use malloc para criar dinamicamente um vetor de Aluno. Leia os dados e mostre o nome do aluno que possui a maior nota.

 */

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Aluno
typedef struct
{
    char nome[50];
    float nota;
} Aluno;

// Função lerAlunos: lê os dados dos alunos
void lerAlunos(Aluno *alunos, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome); // Lê o nome do aluno
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota); // Lê a nota do aluno
    }
}

// Função encontrarMaiorNota: encontra o aluno com a maior nota
int encontrarMaiorNota(Aluno *alunos, int n)
{
    int indiceMaior = 0;
    for (int i = 1; i < n; i++)
    {
        if (alunos[i].nota > alunos[indiceMaior].nota)
        {
            indiceMaior = i;
        }
    }
    return indiceMaior;
}

// Função main
int main()
{
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n); // Lê a quantidade de alunos

    // Aloca dinamicamente um vetor de Aluno
    Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));
    if (alunos == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1; // Sai do programa em caso de erro na alocação
    }

    lerAlunos(alunos, n); // Lê os dados dos alunos

    int indiceMaior = encontrarMaiorNota(alunos, n); // Encontra o aluno com a maior nota

    // Mostra o nome do aluno com a maior nota
    printf("O aluno com a maior nota é: %s com nota %.2f\n", alunos[indiceMaior].nome, alunos[indiceMaior].nota);

    free(alunos); // Libera a memória utilizada

    return 0;
}