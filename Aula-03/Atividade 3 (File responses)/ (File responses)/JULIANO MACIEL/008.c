//exercícios 2, 4, 7 e 8 .

#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

Aluno *buscarAluno(Aluno alunos[], int tamanho, int matricula) {
    int i;
    
    for (i = 0; i < tamanho; i++) {
        if (alunos[i].matricula == matricula) {
            return &alunos[i];
        }
    }
    
    return NULL;
}

int main() {
    Aluno alunos[5];
    Aluno *resultado;
    int i, matriculaBusca;
    printf("=== CADASTRO DE ALUNOS ===\n");
    for (i = 0; i < 5; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }


    printf("\n=============================\n");
    printf("Digite a matricula para busca: ");
    scanf("%d", &matriculaBusca);


    resultado = buscarAluno(alunos, 5, matriculaBusca);


    if (resultado != NULL) {
        printf("\nAluno encontrado:\n");
        printf("Nome: %s\n", resultado->nome);
        printf("Nota: %.1f\n", resultado->nota);
    } else {
        printf("\nAluno nao encontrado\n");
    }

    return 0;
}
