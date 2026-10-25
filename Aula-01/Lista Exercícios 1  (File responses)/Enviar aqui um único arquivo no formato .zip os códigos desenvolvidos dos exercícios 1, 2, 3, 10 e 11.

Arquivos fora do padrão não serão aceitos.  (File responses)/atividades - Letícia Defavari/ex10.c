/******************************************************************************
10.Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é
Equilátero, Isósceles ou Escaleno. Sendo que:
? Triângulo Equilátero: possui os 3 lados iguais.
? Triângulo Isóscele: possui 2 lados iguais.
? Triângulo Escaleno: possui 3 lados diferentes.
O programa deve apresentar um menu com as opções dentro de uma estrutura de repetição
? 1 - Verificar triangulo que encaminhará para leitura dos lados
? 2 - sair que fechará o programa
*******************************************************************************/

#include <stdio.h>

void verificaTriangulo(); 

int main()
{

    int op = 0;
	while(op != 2)
	{
		printf("\n--- Menu de Operacoes ---");
		printf("\n1 - Verificar triangulo");
		printf("\n2 - Sair do Programa");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &op);
		switch(op)
		{
		case 1:
		    verificaTriangulo(); //funcao void, é só chamar
			break;
		case 2:
		    printf("\nPrograma encerrado!");
			break;
		default:
			printf("\nErro    Erro    Erro    Erro\n");
			break;
		}
	}
    
    return 0;
}

void verificaTriangulo(int l1, int l2, int l3){
    
    printf("Digite a medida dos lados dos triangulos: ");
    printf("\nLado 1: ");
    scanf("%d", &l1);
    printf("\nLado 2: ");
    scanf("%d", &l2);
    printf("\nLado 3: ");
    scanf("%d", &l3);
    
    if(l1 == l2 && l1 == l3){
            printf("Seu triangulo e equilatero! Com os 3 lados iguais!");
    }
    else if(l1 != l2 && l1 != l3){
        if(l3 != l2){
            printf("Seu triangulo e escaleno! Com nenhum lado de mesmo tamanho!");
        }
    }
    else if(l1 == l2 && l1 != l3){
        printf("Seu triangulo e isosceles! Com apenas 2 lados iguais!");
    } 
    else if(l2 == l3 && l1 != l2){
        printf("Seu triangulo e isosceles! Com apenas 2 lados iguais!");
        // sei la pq n ta mostrando essa bomba
    }
    else if(l1 == l3 && l2 != l3){
        printf("Seu triangulo e isosceles! Com apenas 2 lados iguais!");
    }
    else{
        printf("\nErro    Erro    Erro    Erro\n");
    }
    
} //void nao retorna

