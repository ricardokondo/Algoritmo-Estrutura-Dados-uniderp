// Um registro (= record) é um "pacote" de variáveis, possivelmente de tipos diferentes.
// Cada variável é um campo (= field) do registro.
// Na linguagem C, registros são conhecidos como structs (o nome é uma abreviatura de structure).
// criação de uma funçãofim evento

#include <stdio.h>
#include <stdlib.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

typedef struct dma data;

data fimEvento(data inicio, int duracao)
{
    data fim;
    fim.dia = inicio.dia + duracao;
    fim.mes = inicio.mes;
    fim.ano = inicio.ano;

    return fim;
}

int main()
{
    /*
        data inicio;
        inicio.dia = 1;
        inicio.mes = 2;
        inicio.ano = 2026;

        data fim = fimEvento(inicio, 3);

        printf("inicio: %d/%d/%d\n", inicio.dia, inicio.mes, inicio.ano);
        printf("fim: %d/%d/%d\n", fim.dia, fim.mes, fim.ano);
    */

    data a, b;

    printf("Digite a data de início do evento (dia, mês, ano): ");
    scanf("%d %d %d", &a.dia, &a.mes, &a.ano);

    // &a.dia significa "o endereço de memória do campo dia da variável a", e assim por diante para os outros campos.

    int duracao;
    printf("Digite a duração do evento (em dias): ");
    scanf("%d", &duracao);

    b = fimEvento(a, duracao);

    printf("Data de início: %d/%d/%d\n", a.dia, a.mes, a.ano);
    printf("Data de término: %d/%d/%d\n", b.dia, b.mes, b.ano);

    return 0;
}