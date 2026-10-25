#include <stdio.h>

int main()
{
    float ladoA = 0, ladoB = 0, ladoC = 0;
    int opcao = 0;
    do {
        printf("\n\n\n--------------------------------------\n--------Operador de Triangulos--------\n");
        printf("[1] - Verificar Triangulo\n[2] - Sair\n");
        printf("Selecione uma opção: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Informe as medidas do triangulo: ");
                printf("\nComprimento do Lado 1: ");
                scanf("%f", &ladoA);
                printf("\nComprimento do Lado 2: ");
                scanf("%f", &ladoB);
                printf("\nComprimento do Lado 3: ");
                scanf("%f", &ladoC);
                if(ladoA == ladoB && ladoC == ladoA)
                {
                    printf("\nEsse triangulo é um triangulo equilatero.");
                } else if(ladoA == ladoB || ladoC == ladoB || ladoA == ladoC)
                {
                    printf("\nEsse triangulo é um triangulo isoceles.");
                } else
                {
                    printf("\nEsse triangulo é um triangulo escaleno");
                }
                break;
            case 2:
                printf("\nSaindo...");
                break; 
            default:
                printf("\nOpçao selecionada é invalida.");
                break;
                
        }
    } while(opcao != 2);
    printf("\nAté mais!");
    return 0;
}