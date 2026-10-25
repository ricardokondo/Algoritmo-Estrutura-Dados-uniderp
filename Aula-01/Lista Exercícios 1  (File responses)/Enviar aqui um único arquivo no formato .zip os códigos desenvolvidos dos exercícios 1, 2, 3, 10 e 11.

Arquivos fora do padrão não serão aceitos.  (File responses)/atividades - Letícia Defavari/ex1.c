/******************************************************************************
Crie um programa que calcule a perímetro de um retângulo.
A leitura dos valores do comprimento e largura do retângulo devem ser recebidas a partir do
teclado.
? Os valores lidos devem ser todos positivos, valide a entrada com as estruturas de
decisões
? Utilizando variáveis constantes para declarar uma constante que represente o
número de lados do retângulo (sempre igual a 4) e outra constante que represente o
fator de conversão de centímetros para metros (por exemplo, 0.01).
? Realize o cálculo do perímetro do retângulo utilizando a fórmula:

perímetro = 2 * (comprimento + largura).

? Exiba o resultado do cálculo na tela.
*******************************************************************************/
#include <stdio.h>

void verificaPerimetro();
void recebeParametros();

int main()
{

    int op = 0;
    while (op != 2)
    {
        printf("\n--- Menu de Operacoes ---");
        printf("\n1 - Verificar perimetro");
        printf("\n2 - Sair do Programa");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            recebeParametros();
            verificaPerimetro(); // funcao void so chama
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

void verificaPerimetro(int comprimento, int largura)
{

    float perimetro = 0;

    perimetro = 2 * (comprimento + largura);
    printf("O perimetro e: %.2f", perimetro);
}

void recebeParametros(int comprimento, int largura, void verificaPerimetro())
{

    printf("Digite a medida dos lados do retangulo");
    printf("\nComprimento: ");
    scanf("%d", &comprimento);
    printf("\nLaargura: ");
    scanf("%d", &largura);

    if (comprimento <= 0 || largura <= 0)
    {
        printf("Digite um numero positivo nao nulo ");
    }
    else
    {
        verificaPerimetro();
    }
}

// void nao retorna


