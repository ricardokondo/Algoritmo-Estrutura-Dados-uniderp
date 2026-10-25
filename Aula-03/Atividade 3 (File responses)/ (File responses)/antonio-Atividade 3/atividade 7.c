/*Utilizando a estrutura:
typedef struct {
int matricula;
char nome[50];
float nota;
} Aluno;
Cadastre 5 alunos.
Depois solicite uma matrícula ao usuário.
O programa deverá percorrer o vetor e:
- exibir os dados do aluno caso a matrícula seja encontrada;
- apresentar "Aluno não encontrado" caso contrário.
Exemplo:
Digite a matrícula: 103
Aluno encontrado:
Nome: Carlos
Nota: 8.5*/


#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

void cadastrarAlunos(Aluno alunos[], int tamanho) {
	int i;
    for ( i = 0; i < tamanho; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Digite a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Digite o nome do aluno: ");
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Digite a nota do aluno: ");
        scanf("%f", &alunos[i].nota);
        getchar();
    }
}

Aluno *buscarAluno(Aluno alunos[], int tamanho, int matricula) {
	int i;
    for ( i = 0; i < tamanho; i++) {
        if (alunos[i].matricula == matricula) {
            return &alunos[i];
        }
    }
    return NULL;
}

int main() {
    Aluno alunos[5];
    int opcao = 0;
    int matricula;
    Aluno *resultado;
    int cadastrados = 0;

    while (opcao != 3) {
        printf("\n==============================\n");
        printf("ESCOLHA A OPCAO DESEJADA:\n");
        printf("1 - Cadastrar alunos\n");
        printf("2 - Procurar matricula\n");
        printf("3 - Sair\n");
        printf("==============================\n");
        printf("Digite: ");

        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            opcao = 0;
        }

        switch (opcao) {
            case 1:
                cadastrarAlunos(alunos, 5);
                cadastrados = 1;
                printf("\nCadastro realizado com sucesso!\n");
                break;

            case 2:
                if (!cadastrados) {
                    printf("\nNenhum aluno cadastrado ainda! Use a opcao 1 primeiro.\n");
                    break;
                }

                printf("\nDigite o numero da matricula do aluno: ");
                if (scanf("%d", &matricula) != 1) {
                    while (getchar() != '\n');
                    printf("Matricula invalida!\n");
                    break;
                }

                resultado = buscarAluno(alunos, 5, matricula);

                if (resultado != NULL) {
                    printf("\nAluno encontrado!\n");
                    printf("Matricula: %d\n", resultado->matricula);
                    printf("Nome: %s\n", resultado->nome);
                    printf("Nota: %.2f\n", resultado->nota);
                } else {
                    printf("\nCADASTRO NAO ENCONTRADO!\n");
                }
                break;

            case 3:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
