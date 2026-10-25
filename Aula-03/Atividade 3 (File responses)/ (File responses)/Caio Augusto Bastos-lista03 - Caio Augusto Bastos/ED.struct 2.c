#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main()
{
    float valorTotal = 0;
    Produto produto;
    printf("Informe o nome do produto: ");
    fgets(produto.nome, 50, stdin);
    printf("Informe o codigo do produto: ");
    scanf("%d", &produto.codigo);
    printf("Informe o preco do produto: ");
    scanf("%f", &produto.preco);
    printf("Informe a quantidade desejada: ");
    scanf("%d", &produto.quantidade);
    valorTotal = produto.preco * produto.quantidade;
    printf("\n-----------------------------------\n------Dados do Produto------\nNome: %s\nCodigo: %d\nPreco: %.2f\nQuantidade: %d\nValor total da compra: %.2f", produto.nome, produto.codigo, produto.preco, produto.quantidade, valorTotal);
    
    return 0;
}