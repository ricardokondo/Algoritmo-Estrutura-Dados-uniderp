// Um registro (= record) é um "pacote" de variáveis, possivelmente de tipos diferentes.
// Cada variável é um campo (= field) do registro.
// Na linguagem C, registros são conhecidos como structs (o nome é uma abreviatura de structure).

#include <stdio.h>
#include <stdlib.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

struct dma x;
struct dma y;

int main()
{

    x.dia = 1;
    x.mes = 2;
    x.ano = 2026;

    y.dia = 3;
    y.mes = 8;
    y.ano = 2026;

    printf("x: %d/%d/%d\n", x.dia, x.mes, x.ano);
    printf("y: %d/%d/%d\n", y.dia, y.mes, y.ano);

    return 0;
}