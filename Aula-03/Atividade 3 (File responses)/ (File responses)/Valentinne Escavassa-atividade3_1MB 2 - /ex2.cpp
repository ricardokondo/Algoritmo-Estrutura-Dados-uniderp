#include <stdio.h>
typedef struct
{
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;
int main()
{
    Produto p;
    float total;
    scanf("%d", &p.codigo);
    scanf(" %49[^\n]", p.nome);
    scanf("%f", &p.preco);
    scanf("%d", &p.quantidade);
    total = p.preco * p.quantidade;
    printf("Codigo: %d\nNome: %s\nPreco: %.2f\nQuantidade: %d\nTotal: %.2f\n", p.codigo, p.nome, p.preco, p.quantidade, total);
    if (p.quantidade == 0)
        printf("Produto sem estoque.");
    return 0;
}