/*Cadastre 5 alunos.
Depois solicite uma matrícula ao usuário.
O programa deverá percorrer o vetor e:
- exibir os dados do aluno caso a matrícula seja encontrada;
- apresentar "Aluno não encontrado" caso contrário.
Exemplo:
Digite a matrícula: 103
Aluno encontrado:
Nome: Carlos
Nota: 8.5  */

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

void consultarAlunos(Aluno cadastro[5]) {

    int matriculaTarget;
    int tamanhoVetor = 5;
    int check = 0;

    printf("Digite a matricula desejada: \n");
    scanf("%d", &matriculaTarget);

    for (int i = 0; i < tamanhoVetor; i++)
    {
        if (cadastro[i].matricula == matriculaTarget)
        {
            printf("Aluno encontrado:\n");
            printf("Nome: %s", cadastro[i].nome);
            printf("Nota: %.2f\n", cadastro[i].nota);
            check = 1;
        }
    }
    if (check == 0)
    {
        printf("Aluno nao encontrado!\n");
    }
}

void menu(Aluno cadastro[5]) {

    int opcoes;

    while (1) {

        printf("=========MENU=========");
        printf("\n1. CADASTRAR ALUNOS");
        printf("\n2. CONSULTAR ALUNOS");
        printf("\n3. SAIR");
        printf("\n=========MENU=========\n");

        scanf("%d", &opcoes);

        switch (opcoes) {
        case 1:
            cadastrarAlunos(cadastro);
            break;
        case 2:
            consultarAlunos(cadastro);
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
