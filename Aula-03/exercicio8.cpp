// Modifique o exercício anterior criando a função : Aluno *buscarAluno(Aluno alunos[], int tamanho, int matricula);
// A função deverá : percorrer o vetor;
// retornar o endereço do aluno encontrado;
// retornar NULL caso não encontre.No main : Aluno *resultado;
// resultado = buscarAluno(alunos, 5, matricula);
// Depois : if (resultado != NULL)
// {
//     printf("Nome: %s\n", resultado->nome);
// }

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
Aluno *buscarAluno(Aluno alunos[], int quantidade, int matricula)
{
    for (int i = 0; i < quantidade; i++)
    {
        if (alunos[i].matricula == matricula)
        {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s", alunos[i].nome);
            printf("Nota: %.2f\n", alunos[i].nota);
            return &alunos[i]; // Retorna o endereço do aluno encontrado
        }
    }
    printf("\nAluno não encontrado.\n"); // Caso a matrícula não seja encontrada
    return NULL;                         // Retorna NULL caso o aluno não seja encontrado
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
    Aluno *resultado = buscarAluno(alunos, 5, matricula);

    if (resultado != NULL)
    {
        printf("Nome: %s", resultado->nome);
        printf("Nota: %.2f\n", resultado->nota);
    }

    return 0;
}