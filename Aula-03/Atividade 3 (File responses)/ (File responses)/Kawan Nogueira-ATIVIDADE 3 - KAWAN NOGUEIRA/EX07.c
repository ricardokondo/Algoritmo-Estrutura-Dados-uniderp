#include <stdio.h>
#include <stdio.h>

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

typedef struct{
    int matricula;
    char nome[50];
    float nota;
} Aluno;

void cadastrarAlunos(Aluno alunos[5]){

    int tamanho = 5;
    for(int i = 0; i < tamanho; i++){
        printf("Digite a matricula do aluno: \n");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Digite o nome aluno: \n");
        fgets(alunos[i].nome, 50, stdin);
        printf("Digite a nota do aluno: \n");
        scanf("%f", &alunos[i].nota);
    }

}

void encontrarMatricula(Aluno alunos[5]){
    
    int tamanho = 5;
    int matriculaComparar;
    int auxiliar = 0;

    printf("Digite o numero da matricula do aluno: \n");
    scanf("%d", &matriculaComparar);

    for(int i = 0; i<tamanho; i++){
        if(matriculaComparar == alunos[i].matricula){
            printf("ALUNO ENCONTRADO!\n");
            printf("Nome: %s", alunos[i].nome);
            printf("Nota: %.2f\n", alunos[i].nota);
            auxiliar = 1;
            break;
        }
    }

    if (auxiliar == 0) {
        printf("CADASTRO NAO ENCONTRADO!\n");
    }
}

int main(){

    Aluno alunos[5];
    int opcao = 0;

    while (opcao != 3){
       
        printf("\nESCOLHA A OPCAO DESEJADA:\n");
        printf("1 - Cadastrar alunos\n");
        printf("2 - Procurar matricula\n");
        printf("3 - Sair\n");
        printf("Digite: ");
        scanf("%d", &opcao);

        switch (opcao){

            case 1:
                cadastrarAlunos(alunos);
                break;
    
            case 2:
                encontrarMatricula(alunos);
                break;
  
            case 3:
                printf("Saindo do programa - - - ");
                break;

            default:
                printf("OPCAO INVALIDA");
        }
    }

    return 0;
}