// Escreva um código em Linguagem C, no qual temos uma função que receba um byte c (que pode representar um caractere ASCII, por exemplo)
// e transforme-o em uma string, ou seja, devolva uma string de comprimento 1 tendo c como único elemento.
// Utilize alocação dinâmica de memória para criar a string resultante. usando a função malloc().

#include <stdio.h>
#include <stdlib.h>

void converteByteParaString(unsigned char c, char *str)
{
    str[0] = c;    // Atribui o byte ao primeiro elemento da string
    str[1] = '\0'; // Adiciona o terminador nulo para formar uma string válida
}

int main()
{
    unsigned char c = 'A'; // Exemplo de byte (caractere ASCII)

    // Aloca dinamicamente memória para a string resultante
    char *str = (char *)malloc(2 * sizeof(char)); // 1 caractere + 1 para o terminador nulo

    if (str == NULL)
    {
        printf("Erro ao alocar memória\n");
        return 1; // Sai do programa em caso de erro na alocação
    }

    converteByteParaString(c, str); // Converte o byte para string

    printf("O caractere convertido é: %s\n", str); // Exibe a string resultante

    free(str); // Libera a memória alocada
    return 0;
}