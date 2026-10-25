//exercícios 2, 4, 7 e 8 e.

#include <stdio.h>

typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto p;
    float valorTotal;

    printf("=== CADASTRO DE PRODUTO ===\n");
    
    printf("Digite o codigo do produto: ");
    scanf("%d", &p.codigo);

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", p.nome);

    printf("Digite o preco unitario: R$ ");
    scanf("%f", &p.preco);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &p.quantidade);

    valorTotal = p.preco * p.quantidade;

    printf("\n====================================\n");
    printf("        DADOS DO PRODUTO            \n");
    printf("====================================\n");
    printf("Codigo          : %d\n", p.codigo);
    printf("Nome            : %s\n", p.nome);
    printf("Preco Unitario  : R$ %.2f\n", p.preco);
    printf("Quantidade      : %d\n", p.quantidade);
    printf("Valor Total     : R$ %.2f\n", valorTotal);
    printf("------------------------------------\n");

    if (p.quantidade == 0) {
        printf("ALERTA: O produto esta SEM ESTOQUE!\n");
    } else {
        printf("Status: Produto em estoque.\n");
    }
    printf("====================================\n");

    return 0;
}
