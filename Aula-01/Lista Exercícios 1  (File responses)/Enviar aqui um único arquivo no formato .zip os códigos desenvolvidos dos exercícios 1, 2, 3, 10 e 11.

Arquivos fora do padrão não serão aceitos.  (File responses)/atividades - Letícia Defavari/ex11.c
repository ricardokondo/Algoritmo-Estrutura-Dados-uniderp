/******************************************************************************
11.Crie um programa que calcule a perímetro de um retângulo.
A leitura dos valores do comprimento e largura do retângulo devem ser recebidas a partir do
teclado.
● Os valores lidos devem ser todos positivos, valide a entrada com as estruturas de
decisões
● Utilizando variáveis constantes para declarar uma constante que represente o
número de lados do retângulo (sempre igual a 4) e outra constante que represente o
fator de conversão de centímetros para metros (por exemplo, 0.01).
● Realize o cálculo do perímetro do retângulo utilizando a fórmula:

perímetro = 2 * (comprimento + largura).

● Exiba o resultado do cálculo na tela.

https://www.youtube.com/watch?v=3pfRvy_gfqY&t=1s
*******************************************************************************/
#include <stdio.h>

void receberParametros();
void verificarPerimetro();
void exibirMenu();

int main()
{
    exibirMenu();
    return 0;
}

void exibirMenu()
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
            receberParametros();
            break;

        case 2:
            printf("\nPrograma encerrado!");
            break;
        default:
            printf("\nErro    Erro    Erro    Erro\n");
            break;
        }
    }
}

void receberParametros()
{
    int comprimento, largura;
    printf("Digite a medida dos lados do retangulo");
    printf("\nComprimento: ");
    scanf("%d", &comprimento);
    printf("\nLargura: ");
    scanf("%d", &largura);

    if (comprimento <= 0 || largura <= 0)
    {
        printf("Digite um numero positivo nao nulo ");
    }
    else
    {
        verificarPerimetro(); // n pode chamar funcao dentro de funcao nao??
        // "too few arguments in function call" -- q isso
    }
}

void verificarPerimetro(int comprimento, int largura)
{
    float perimetro = 0;
    perimetro = 2 * (comprimento + largura);
    printf("O perimetro e: %.2f", perimetro);
}
