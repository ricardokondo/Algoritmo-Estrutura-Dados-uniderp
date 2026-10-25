//exercícios 2, 4, 7 e 8 .

#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

int main() {
    Aluno turma[5];
    int i;
    int matriculaBusca;
    int encontrado = 0; 

   
    printf("=== CADASTRO DE ALUNOS ===\n");
    for (i = 0; i < 5; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", turma[i].nome); 

        printf("Nota: ");
        scanf("%f", &turma[i].nota);
    }

    printf("\n=============================\n");
    printf("Digite a matricula para busca: ");
    scanf("%d", &matriculaBusca);

    for (i = 0; i < 5; i++) {

        if (turma[i].matricula == matriculaBusca) {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s\n", turma[i].nome);
            printf("Nota: %.1f\n", turma[i].nota);
            
            encontrado = 1;
            break;          
        }
    }

    if (!encontrado) { 
        printf("\nAluno nao encontrado\n");
    }

    return 0;
}
