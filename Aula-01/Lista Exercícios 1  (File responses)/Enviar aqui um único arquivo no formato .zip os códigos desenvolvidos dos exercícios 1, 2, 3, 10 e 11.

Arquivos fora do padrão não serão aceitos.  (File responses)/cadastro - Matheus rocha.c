#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define QTD_QUESTOES 10 //Quantidade de questões.
#define MAX_ALUNOS 3 //Número de alunos.

typedef struct {
	int id;
	char respostas[QTD_QUESTOES];
	int acertos;
} Aluno;

Aluno alunosCadastrados[MAX_ALUNOS];
Aluno aluno;
char gabarito[QTD_QUESTOES];

void exibirMenu();
void exibirMenuGabarito();
void cadastrarGabarito();
void carregarGabarito();
void imprimirGabarito();

int main()
{
	exibirMenu();
	return 0;
}

void exibirMenu(){
    int opcao = 0;
    while(opcao != 5){
        printf("\n===== MENU =====\n");
        printf("1 - Menu Gabarito\n");
        printf("2 - Cadastrar Aluno\n");
        printf("3 - Corrigir Provas\n");
        printf("4 - Exibir Resultados\n");
        printf("5 - Sair\n");
        printf("6 - Imprimir Gabarito (FUNÇÃO DE TESTE, DEVE SAIR NA VERSÃO FINAL)\n");
        printf("================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                exibirMenuGabarito();
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            case 6:
                imprimirGabarito();
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
}

void exibirMenuGabarito(){
    int qual = 0;
    while(qual != 3){
        printf("\n===== MENU [GABARITO] =====\n");
        printf("1 - Cadastrar Gabarito Oficial\n");
        printf("2 - Usar Gabarito pré-carregado\n");
        printf("3 - Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &qual);
        switch (qual)
        {
            case 1:
                cadastrarGabarito();
                break;
            case 2:
                carregarGabarito();
                break;
            case 3:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opcao inválida!\n");
                break;
        }        
    }
}

void cadastrarGabarito(){
    //Cadastra o gabarito, validando a alternativa.
    //Se não for o valor requisitado (A, B, C, D ou E), gera erro e pede novamente.
    char alternativa;
    printf("\nDigite o gabarito oficial (%d questoes) [A, B, C, D ou E]:\n", QTD_QUESTOES);
    int i = 0;
    while(i < QTD_QUESTOES){
        printf("Questao %d: ", i + 1);
        scanf(" %c", &alternativa);
        alternativa = toupper(alternativa);
        switch (alternativa){
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
                gabarito[i] = alternativa;
                i++;
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
    if (i >= 9){
        printf("Gabarito cadastrado com sucesso!\n");
    }
    else{
        printf("Ocorreu um erro ao cadastrar o Gabarito!\n");
    }
}

void carregarGabarito(){
    printf("Carregando Gabarito pré-cadastrado!\n");
    gabarito[0] = 'A';
    gabarito[1] = 'B';
    gabarito[2] = 'C';
    gabarito[3] = 'D';
    gabarito[4] = 'E';
    gabarito[5] = 'A';
    gabarito[6] = 'B';
    gabarito[7] = 'C';
    gabarito[8] = 'D';
    gabarito[9] = 'E';
    printf("Gabarito cadastrado com sucesso!\n");
}

void imprimirGabarito(){
    printf("Imprimindo Gabarito cadastrado!\n");
    for (int i = 0; i < QTD_QUESTOES; ++i)
    {
        printf("\n%d - %c", i + 1, gabarito[i]);    
    }
    printf("\nGabarito cadastrado com sucesso!\n");
}

//Um exemplo de código...
// void corrigirProvas() {
//     for (int i = 0; i < qtdAlunos; i++) {
//         int contador = 0;
//         for (int j = 0; j < QTD_QUESTOES; j++) {
//             if (alunos[i].respostas[j] == gabarito[j]) {
//                 contador++;
//             }
//         }
//         alunos[i].acertos = contador;
//     }
//     printf("\nProvas corrigidas com sucesso!\n");
// }