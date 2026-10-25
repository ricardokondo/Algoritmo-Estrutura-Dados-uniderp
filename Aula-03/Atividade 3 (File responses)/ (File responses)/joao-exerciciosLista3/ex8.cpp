/*  Modifique o exercício anterior criando a função:
Aluno *buscarAluno(Aluno alunos[], int tamanho, int matricula);
A função deverá:
- percorrer o vetor;
- retornar o endereço do aluno encontrado;
- retornar NULL caso não encontre.
No main:
Aluno *resultado;
resultado = buscarAluno(alunos, 5, matricula);
Depois:
if (resultado != NULL) {
printf("Nome: %s\n", resultado->nome);
}  */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

void cadastrarAlunos(Aluno cadastro[5]) {

    int tamanhoVetor = 5;

    for (int i = 0; i < tamanhoVetor; i++)
    {
        printf("||=================================||");
        printf("\nDigite a matricula do seu %d aluno!: ", i + 1);
        scanf("%d", &cadastro[i].matricula);

        getchar();
        printf("Digite o nome do seu %d aluno!: ", i + 1);
        fgets(cadastro[i].nome, 50, stdin);

        printf("Digite a nota do seu %d aluno!: ", i + 1);
        scanf("%f", &cadastro[i].nota);
    }
}

Aluno *buscarAlunos(Aluno alunos[5]) {

    int tamanho = 5;
    int matricula;

	printf("Digite a matricula desejada: \n");
    scanf("%d", &matricula);

    for (int i = 0; i < tamanho; i++) {
        if (alunos[i].matricula == matricula) {
            
			printf("Aluno encontrado:\n");
			printf("Nome: %s", alunos[i].nome);
			printf("Matricula: %d\n", alunos[i].matricula);
			printf("Nota: %.2f\n", alunos[i].nota);
            return &alunos[i];
        }
    }

	printf("Aluno nao encontrado!\n");
    return NULL;
}

void menu(Aluno cadastro[5]) {

    int opcoes;

    while (1) {

        printf("=========MENU=========");
        printf("\n1. CADASTRAR ALUNOS");
        printf("\n2. BUSCAR ALUNOS");
        printf("\n3. SAIR");
        printf("\n=========MENU=========\n");

        scanf("%d", &opcoes);

        switch (opcoes) {
        case 1:
            cadastrarAlunos(cadastro);
            break;
        case 2:
            buscarAlunos(cadastro);
            break;
        case 3:
            printf("Ate logo! :D");
            return;
        default:
            printf("Digite um numero valido!\n");
            break;
        }
    }
}

int main()
{
    Aluno aluno[5];

    menu(aluno);

    return 0;
}
