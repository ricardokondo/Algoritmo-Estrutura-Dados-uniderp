// Crie uma estrutura : typedef struct
// {
//     int codigo;
//     char nome[50];
//     float salario;
// } Funcionario;
// Implemente : void reajustarSalario(Funcionario *f, float percentual);
// A função deverá atualizar o salário do funcionário.

//     Por exemplo : Salário : R$ 3000,00 Reajuste : 10 %
//         Novo salário : R$ 3300,00
// O programa principal deverá solicitar os dados e o percentual de reajuste.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct
{
    int codigo;
    char nome[MAX_NOME];
    float salario;
} Funcionario;

void reajustarSalario(Funcionario *f, float percentual)
{
    f->salario += f->salario * (percentual / 100); // Atualiza o salário com base no percentual
}

int main()
{
    Funcionario funcionario;
    float percentual;

    // Solicita os dados ao usuário
    printf("Digite o código do funcionário: ");
    scanf("%d", &funcionario.codigo);

    printf("Digite o nome do funcionário: ");
    getchar(); // Limpa o buffer do teclado
    fgets(funcionario.nome, MAX_NOME, stdin);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);

    // Chama a função para reajustar o salário
    reajustarSalario(&funcionario, percentual);

    // Exibe os dados atualizados do funcionário
    printf("\nDados atualizados do funcionário:\n");
    printf("Código: %d\n", funcionario.codigo);
    printf("Nome: %s", funcionario.nome);
    printf("Novo salário: R$ %.2f\n", funcionario.salario);

    return 0;
}
