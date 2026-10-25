#include <stdio.h>

int main(){

	char nome[40];
	int idade;
	float altura;

	//Coleta das informações	
	printf("Digite seu nome\n");
	fgets(nome, sizeof(nome), stdin);//le o nome com espaço
	printf("Digite sua idade\n");
	scanf("%d", &idade);
	printf("Digite sua altura (em metros)\n");
	scanf("%f", &altura);
	
	//Impressão das informações
	printf("\nSuas informacoes:\n");
	printf("Nome: %s", nome);
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	return 0;
}
