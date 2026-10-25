// Um registro (= record) é um "pacote" de variáveis, possivelmente de tipos diferentes.
// Cada variável é um campo (= field) do registro.
// Na linguagem C, registros são conhecidos como structs (o nome é uma abreviatura de structure).
// Cada registro tem um endereço na memória do computador.
// (Você pode imaginar que o endereço de um registro é o endereço de seu primeiro campo.)
// O endereço de um registro pode ser armazenado em um ponteiro. Dizemos que um tal ponteiro aponta para o registro.

#include <stdio.h>
#include <stdlib.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

typedef struct dma data;

// criação de uma função fim evento
data fimEvento(data inicio, int duracao)
{
    data fim;

    fim.dia = inicio.dia + duracao;
    fim.mes = inicio.mes;
    fim.ano = inicio.ano;

    // Enquanto ultrapassar os 30 dias
    while (fim.dia > 30)
    {
        fim.dia -= 30;
        fim.mes++;

        // Verifica mudança de ano
        if (fim.mes > 12)
        {
            fim.mes = 1;
            fim.ano++;
        }
    }

    return fim;
}

// criação de uma função fim evento com ponteiro
data fimEventoPonteiro(data *inicio, int duracao) // recebe um ponteiro para um registro do tipo data
{
    data fim;
    fim.dia = inicio->dia + duracao; // inicio->dia é equivalente a (*inicio).dia
    fim.mes = inicio->mes;
    fim.ano = inicio->ano;

    // Enquanto ultrapassar os 30 dias
    while (fim.dia > 30)
    {
        fim.dia -= 30;
        fim.mes++;

        // Verifica mudança de ano
        if (fim.mes > 12)
        {
            fim.mes = 1;
            fim.ano++;
        }
    }

    return fim;
}

int main()
{
    data a, b;
    data c;
    int duracao;

    printf("Digite a data de início do evento (dia, mês, ano): ");
    scanf("%d %d %d", &a.dia, &a.mes, &a.ano);

    // &a.dia significa "o endereço de memória do campo dia da variável a", e assim por diante para os outros campos.
    printf("Digite a duração do evento (em dias): ");
    scanf("%d", &duracao);

    b = fimEvento(a, duracao);

    printf("Data de início: %d/%d/%d\n", a.dia, a.mes, a.ano);
    printf("Data de término: %d/%d/%d\n", b.dia, b.mes, b.ano);

    // usando ponteiro
    c = fimEventoPonteiro(&a, duracao);
    printf("Data de término (usando ponteiro): %d/%d/%d\n", c.dia, c.mes, c.ano);

    return 0;
}