#include <stdio.h>

typedef struct {
	int codigo;
	char nome[50];
	float preco;
	int quantidade;
} Produto;

int main(){
	Produto x;
	float valorTotal;
	
	printf("Digite o codigo do seu produto: \n");
	scanf("%d", &x.codigo);
	getchar();
	printf("Digite o nome do seu produto: \n");
	fgets(x.nome, 50, stdin);
	printf("Digite o preco do seu produto: \n");
	scanf("%f", &x.preco);
	printf("Digite o quantidade em estoque do seu produto: \n");
	scanf("%d", &x.quantidade);
	
	printf("\n---------------------------------------");
	printf("\nDETALHES DO SEU PRODUTO:\n");
	printf("Codigo: %d\n", x.codigo);
	printf("Nome: %s\n", x.nome);
	printf("Preco: %.2f \n", x.preco);
	printf("Quantidade: %d \n", x.quantidade);
	
	valorTotal = x.preco*x.quantidade;
	if(x.quantidade == 0){
		printf("Produto SEM ESTOQUE");
	}else{
		printf("Valor em estoque: %f", valorTotal);
	}
	
	return 0;
}
