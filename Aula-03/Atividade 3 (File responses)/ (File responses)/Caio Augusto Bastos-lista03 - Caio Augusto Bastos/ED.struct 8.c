#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;


Aluno *buscarAluno(Aluno alunos[], int tamanho, int matricula);
void varrerBuffer();

int main() {
    Aluno alunos[5];
    int opcao = 0, matriculaDesejada = 0;
    
    Aluno *resultado;

    for (int x = 0; x < 5; x++) {
        printf("------------Cadastro do aluno [%d]------------\n", x + 1);
        printf("Informe a matricula do aluno: ");
        scanf("%d", &alunos[x].matricula);
        
        printf("Informe o nome do aluno: ");
        varrerBuffer();
        fgets(alunos[x].nome, 50, stdin);
        
        printf("Informe a nota do aluno: ");
        scanf("%f", &alunos[x].nota);
    }

    while (opcao != 9) {
        printf("\n---------Alunos Cadastrados---------\n");
        printf(" [1] - Buscar aluno por matricula\n [9] - Sair\n");
        printf("Selecione uma opcao: ");
        scanf("%d", &opcao);
        varrerBuffer();
        switch (opcao) {
            case 1:
                printf("\nInforme a matricula do aluno: ");
                scanf("%d", &matriculaDesejada);
                
               
                resultado = buscarAluno(alunos, 5, matriculaDesejada);
                
                
                if (resultado != NULL) {
                    printf("\n-------Aluno Encontrado-------\n");
                    printf("Matricula: %d\n", resultado->matricula);
                    printf("Nome: %s", resultado->nome);
                    printf("Nota: %.2f\n\n", resultado->nota);
                } else {
                    printf("\nNenhum aluno encontrado com essa matricula.\n");
                }
                break;
                
            case 9:
                printf("Adeus.\n");
                break;
                
            default:
                printf("Opcao informada eh invalida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}


Aluno *buscarAluno(Aluno alunos[], int tamanho, int matricula) {
    for (int y = 0; y < tamanho; y++) {
        if (alunos[y].matricula == matricula) {
            return &alunos[y]; 
        }
    }
    return NULL; 
}

void varrerBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}