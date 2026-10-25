// Utilizando a estrutura : typedef struct
// {
//     int matricula;
//     char nome[50];
//     float nota;
// } Aluno;
// Cadastre 5 alunos.Depois solicite uma matrícula ao usuário.
// O programa deverá percorrer o vetor e :
// - exibir os dados do aluno caso a matrícula seja encontrada;
// - apresentar "Aluno não encontrado" caso contrário.

// Exemplo :
// Digite a matrícula :103
// Aluno encontrado :
// Nome : Carlos
// Nota: 8.5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct
{
    int matricula;
    char nome[MAX_NOME];
    float nota;
} Aluno;

// funcao para cadastrar os alunos
void cadastrarAlunos(Aluno alunos[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        getchar(); // Limpa o buffer do teclado
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, MAX_NOME, stdin); // Lê o nome

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota); // Lê a nota
    }
}

// funcao para buscar um aluno pela matrícula
void buscarAluno(Aluno alunos[], int quantidade, int matricula)
{
    for (int i = 0; i < quantidade; i++)
    {
        if (alunos[i].matricula == matricula)
        {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s", alunos[i].nome);
            printf("Nota: %.2f\n", alunos[i].nota);
            return; // Sai da função após encontrar o aluno
        }
    }
    printf("\nAluno não encontrado.\n"); // Caso a matrícula não seja encontrada
}

int main()
{
    Aluno alunos[5]; // Vetor para armazenar 5 alunos
    int matricula;

    // Cadastra os alunos
    cadastrarAlunos(alunos, 5);

    // Solicita a matrícula ao usuário
    printf("\nDigite a matrícula do aluno que deseja buscar: ");
    scanf("%d", &matricula);

    // Busca o aluno pela matrícula
    buscarAluno(alunos, 5, matricula);

    return 0;
}