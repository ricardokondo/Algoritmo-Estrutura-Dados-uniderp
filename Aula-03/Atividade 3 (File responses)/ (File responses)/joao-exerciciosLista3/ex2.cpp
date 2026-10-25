/*Crie uma estrutura chamada Produto contendo:
typedef struct {
int codigo;
char nome[50];
float preco;
int quantidade;
} Produto;
O programa deverá receber os dados de um produto e apresentar:
? código;
? nome;
? preço unitário;
? quantidade;
? valor total em estoque.
O valor em estoque deverá ser calculado por:
valorTotal = preco × quantidade
Caso a quantidade seja igual a zero, informe que o produto está sem estoque.*/

#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int codigo;
	char nome[50];
	float preco;
	int quantidade;
} Produto;

int main() {

	Produto x;

	printf("Digite o codigo do produto: ");
	scanf("%d", &x.codigo);
	getchar();
	printf("Digite o nome do produto: ");
	fgets(x.nome, 50, stdin);
	printf("Digite o preco do produto: ");
	scanf("%f", &x.preco);
	printf("Digite a quantidade do produto: ");
	scanf("%d", &x.quantidade);

	int valorTotal = x.preco * x.quantidade;
	
	printf("\nCodigo: %d", x.codigo);
	printf("\nNome: %s", x.nome);
	printf("Preco: %.2f", x.preco);
	printf("\nQuantidade: %d\n", x.quantidade);

	if (x.quantidade == 0)
	{
		printf("\nO produto esta sem estoque!");
	}
	else
	{
		printf("\nO valor total em estoque eh: %d", valorTotal);
	}

	return 0;
}
