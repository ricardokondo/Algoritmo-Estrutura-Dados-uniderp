// Crie uma estrutura chamada Produto contendo : typedef struct
//{
//     int codigo;
//     char nome[50];
//     float preco;
//     int quantidade;
// } Produto;

// O programa deverá receber os dados de um produto e apresentar : código;
// nome;
// preço unitário;
// quantidade;
// valor total em estoque.O valor em estoque deverá ser calculado por : valorTotal = preco × quantidade
//     Caso a quantidade seja igual a zero,
//                                                                      informe que o produto está sem estoque.

#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 50

typedef struct
{
    int codigo;
    char nome[MAX_NOME];
    float preco;
    int quantidade;
} Produto;

// funcao para calcular o valor total em estoque
float calcularValorTotal(float preco, int quantidade)
{
    float valorTotal = 0;
    if (quantidade < 0)
    {
        printf("Quantidade inválida. A quantidade não pode ser negativa.\n");
        exit(1); // Sai do programa em caso de quantidade inválida
    }
    valorTotal = preco * quantidade;
    return valorTotal;
}

int main()
{
    Produto produto;

    // Solicita os dados ao usuário
    printf("Digite o código do produto: ");
    scanf("%d", &produto.codigo);

    printf("Digite o nome do produto: ");
    getchar(); // Limpa o buffer do teclado
    fgets(produto.nome, MAX_NOME, stdin);

    printf("Digite o preço unitário do produto: ");
    scanf("%f", &produto.preco);

    printf("Digite a quantidade em estoque do produto: ");
    scanf("%d", &produto.quantidade);

    // Calcula o valor total em estoque
    float valorTotal = calcularValorTotal(produto.preco, produto.quantidade);

    // Exibe todos os dados do produto
    printf("\nDados do Produto:\n");
    printf("Código: %d\n", produto.codigo);
    printf("Nome: %s", produto.nome);
    printf("Preço unitário: %.2f\n", produto.preco);
    printf("Quantidade em estoque: %d\n", produto.quantidade);

    if (produto.quantidade == 0)
    {
        printf("O produto está sem estoque.\n");
    }
    else
    {
        printf("Valor total em estoque: %.2f\n", valorTotal);
    }

    return 0;
}