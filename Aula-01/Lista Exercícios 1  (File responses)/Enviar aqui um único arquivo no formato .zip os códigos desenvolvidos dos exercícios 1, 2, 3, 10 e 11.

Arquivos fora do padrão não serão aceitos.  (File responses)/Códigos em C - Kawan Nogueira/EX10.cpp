#include <stdio.h>

int main(){
	
	int opcao;
	float lado1, lado2, lado3;
	
	do{
	
		printf("Escolha uma opçao:\n\n");
		printf("1 - Verificar triangulo que encaminhara para leitura dos lados\n");
		printf("2 - Sair do programa\n");
		scanf("%d", &opcao);
		
		if(opcao == 1)
		{
			printf("\nInforme o valor do LADO 1\n");
			scanf("%f", &lado1);
			printf("Informe o valor do LADO 2\n");
			scanf("%f", &lado2);
			printf("Informe o valor do LADO 3\n");
			scanf("%f", &lado3);
			if(lado1 == lado2 && lado2 == lado3){
				printf("Seu triangulo eh equilatero.");
			}
			else if(lado1 == lado2 || (lado1 == lado3) || lado2 == lado3){
				printf("\nSeu triangulo eh isocele.");
			}		
			else{
				printf("\nSeu triangulo eh escaleno");
			}
		}
		else if(opcao == 2)
		{
			printf("\nSaindo----");
		}
		else
		{
			printf("Opção inválida");
		}
		
	}while(opcao != 2);
}
