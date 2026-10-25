#include <stdio.h>

int main()
{
	int idade;
	float altura;
	char nome[30];

	printf("Nome: ");
	scanf("%29s", nome);

	printf("Idade: ");
	scanf("%d", &idade);

	printf("Altura: ");
	scanf("%f", &altura);

	printf("Olá %s, Você tem : %d anos de idade e você tem %.2f m de altura.\n",
		   nome, idade, altura);

	return 0;
}