#include <stdio.h>
int main() {
char nome[100];
int idade;
float altura;

printf("Digite seu nome: ");
fgets(nome, 100, stdin);
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite sua altura: ");
scanf("%f", &altura);

return 0;

}


