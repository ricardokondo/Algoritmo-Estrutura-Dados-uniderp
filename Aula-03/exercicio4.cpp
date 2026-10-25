// Utilizando a seguinte struct : typedef struct
// {
//     float largura;
//     float altura;
// } Retangulo;
// Implemente : void dobrarDimensoes(Retangulo *r);
// A função deverá multiplicar a largura e a altura por dois.

//     Exemplo : Antes : largura = 10 altura = 5

//     Depois : largura = 20 altura = 10

//  O acesso dentro da função deverá utilizar : r->largura
//   r->altura
//  Objetivo : demonstrar como uma função pode alterar diretamente uma estrutura através de ponteiros.

#include <stdio.h>
#include <stdlib.h>

struct Retangulo
{
    float largura;
    float altura;
};

void dobrarDimensoes(struct Retangulo *r)
{
    r->largura *= 2; // Multiplica a largura por 2
    r->altura *= 2;  // Multiplica a altura por 2
}

void exibirDimensoes(struct Retangulo *r)
{
    printf("Largura: %.2f\n", r->largura);
    printf("Altura: %.2f\n", r->altura);
}

int main()
{
    struct Retangulo retangulo;

    // Solicita os dados ao usuário
    printf("Digite a largura do retângulo: ");
    scanf("%f", &retangulo.largura);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &retangulo.altura);

    // Exibe as dimensões antes de dobrar
    printf("\nDimensões antes de dobrar:\n");
    exibirDimensoes(&retangulo);

    // Chama a função para dobrar as dimensões
    dobrarDimensoes(&retangulo);

    // Exibe as dimensões depois de dobrar
    printf("\nDimensões depois de dobrar:\n");
    exibirDimensoes(&retangulo);

    return 0;
}
