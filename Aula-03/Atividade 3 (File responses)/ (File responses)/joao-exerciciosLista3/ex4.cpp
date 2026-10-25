/*Utilizando a seguinte struct:
typedef struct {
float largura;
float altura;
} Retangulo;
Implemente:
void dobrarDimensoes(Retangulo *r);
A função deverá multiplicar a largura e a altura por dois.
Exemplo:
Antes:
largura = 10
altura = 5
Depois:
largura = 20
altura = 10
O acesso dentro da função deverá utilizar:
r->largura
r->altura
Objetivo: demonstrar como uma função pode alterar diretamente uma estrutura através de
ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float largura;
	float altura;
} Retangulo;

void dobrarDimensoes(Retangulo* ret) {

	ret->altura *= 2;
	ret->largura *= 2;
}

int main() {

	Retangulo ret;

	printf("Digite a largura do retangulo: ");
	scanf("%f", &ret.largura);
	printf("\nDigite a altura do retangulo: ");
	scanf("%f", &ret.altura);

	printf("\n");
	printf("\nAs dimensoes antes da dobra de dimensoes eram:");
	printf("\nlargura: %.1f", ret.largura);
	printf("\nlargura: %.1f\n", ret.altura);

	dobrarDimensoes(&ret);

	printf("\nAs dimensoes depois da dobra de dimensoes sao:");
	printf("\nlargura: %.1f", ret.largura);
	printf("\nlargura: %.1f\n", ret.altura);

	return 0;
}
