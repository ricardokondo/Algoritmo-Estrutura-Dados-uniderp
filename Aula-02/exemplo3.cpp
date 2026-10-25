// utilização de ponteiros tem algumas semelhanças com a utilização de referências, nomeadamente porque permite a alteração do valor apontado pelo ponteiro

#include <stdio.h>
#include <stdlib.h>

// funcao troca
void troca(int *a, int *b)
{
    int temp = *a; // Armazena o valor apontado por a em temp
    *a = *b;       // Atribui o valor apontado por b ao local apontado por a
    *b = temp;     // Atribui o valor armazenado em temp ao local apontado por b
}

// funcao principal
int main()
{
    int x = 10, y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y); // Passa os endereços de x e y
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
