#include <stdio.h>

/*Modifique o exercício anterior criando a função:

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
}*/

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

Aluno *buscarAluno(Aluno alunos[], int tamanho, int matricula){
    
    for(int i = 0; i<tamanho; i++){
        if(alunos[i].matricula == matricula){
            return &alunos[i];
        } 
    }
    return NULL;
}


int main(){

    Aluno alunos[5];
    int opcao = 0;
    int matricula;
    Aluno *resultado;

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
        
        printf("Digite o numero da matricula do aluno: \n");
        scanf("%d", &matricula);
        
        resultado = buscarAluno(alunos, 5, matricula);

        if (resultado != NULL) {
            printf("ALUNO ENCONTRADO!\n");
            printf("Nome: %s", resultado->nome);
            printf("Nota: %.2f\n", resultado->nota);

        } else {
            printf("CADASTRO NAO ENCONTRADO!\n");
        }

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
