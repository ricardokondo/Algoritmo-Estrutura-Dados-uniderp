// Crie uma estrutura chamada Aluno contendo:
// nome - vetor char;
// idade - inteiro;
// nota da primeira avaliação - float;
// nota da segunda avaliação - float.
// O programa deverá : Declarar uma variável do tipo Aluno;
// Solicitar os dados ao usuário;
// Calcular a média das duas notas;
// Exibir todos os dados do aluno;
// Informar se o aluno foi aprovado considerando média maior ou igual a 6.0.

#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 100

typedef struct
{
    char nome[MAX_NOME];
    int idade;
    float nota1;
    float nota2;
} Aluno;

// funcao para calcular a media das notas
float calcularMedia(float nota1, float nota2)
{
    float media;

    // verifica se as notas são válidas (entre 0 e 10)
    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10)
    {
        printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
        exit(1); // Sai do programa em caso de notas inválidas
    }
    media = (nota1 + nota2) / 2;
    return media;
}

int main()
{
    Aluno aluno;

    // Solicita os dados ao usuário
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, MAX_NOME, stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota da primeira avaliação(0 - 10): ");
    scanf("%f", &aluno.nota1);

    printf("Digite a nota da segunda avaliação(0 - 10): ");
    scanf("%f", &aluno.nota2);

    // Calcula a média das notas
    float media = calcularMedia(aluno.nota1, aluno.nota2);

    // Exibe todos os dados do aluno
    printf("\nDados do Aluno:\n");
    printf("Nome: %s", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Média: %.2f\n", media);

    // Informa se o aluno foi aprovado
    if (media >= 6.0)
    {
        printf("O aluno foi aprovado.\n");
    }
    else
    {
        printf("O aluno foi reprovado.\n");
    }

    return 0;
}