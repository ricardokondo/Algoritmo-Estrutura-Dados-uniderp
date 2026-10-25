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



#include <stdlib.h>
#include <stdio.h>


    typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
    } Produto;

    int main()
    {
        Produto p;
        float valorTotal;
        
        printf ("Insira o codigo do produto: ");
		scanf ("%d", &p.codigo);
	      printf ("\nInsira o nome do produto: "); 
	      scanf(" %[^\n]", p.nome);   
	      printf ("\nInsira o preco unitario do produto: ");
			scanf ("%f", &p.preco);
			printf ("\nInsira a quantidade do produto: ");
			scanf ("%d", &p.quantidade);
			
			printf ("\n===================================\n");
			
			valorTotal = p.preco * p.quantidade;
			printf ("\nO codigo do produto eh: %d", p.codigo);
			printf ("\nO nome do produto eh: %s", p.nome);
			printf ("\nO preco unitario do produto eh: R$%.2f", p.preco);
			printf ("\nA quantidade do produto eh: %d", p.quantidade);
			
			if (p.quantidade == 0) {
				printf ("\nO produto esta sem estoque");
				
		} else {
			printf ("\n o valor do total do estoque eh:R$%.2f ", valorTotal);
		}
		printf ("\n===================================\n");
	      
    return 0;
    }
