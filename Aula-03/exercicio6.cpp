// Crie uma estrutura para representar livros : typedef struct
// {
//     int codigo;
//     char titulo[100];
//     float preco;
// } Livro;

// Crie um vetor para armazenar 5 livros.

//     Livro livros[5];

// O programa deverá : Cadastrar os cinco livros;
// Exibir todos os livros cadastrados;
// Informar o livro mais caro;
// Calcular o preço médio dos livros.

//     Objetivo : integrar vetores e estruturas.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITULO 100

typedef struct
{
    int codigo;
    char titulo[MAX_TITULO];
    float preco;
} Livro;

// funcao para cadastrar os livros
void cadastrarLivros(Livro livros[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite o código do livro %d: ", i + 1);
        scanf("%d", &livros[i].codigo);

        getchar(); // Limpa o buffer do teclado
        printf("Digite o título do livro %d: ", i + 1);
        fgets(livros[i].titulo, MAX_TITULO, stdin); // Lê o título do livro

        printf("Digite o preço do livro %d: ", i + 1);
        scanf("%f", &livros[i].preco); // Lê o preço do livro
    }
}

// funcao para exibir os livros cadastrados
void exibirLivros(Livro livros[], int quantidade)
{
    printf("\nLivros cadastrados:\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("Código: %d\n", livros[i].codigo);
        printf("Título: %s", livros[i].titulo);
        printf("Preço: R$ %.2f\n", livros[i].preco);
        printf("-------------------------\n");
    }
}

// funcao para encontrar o livro mais caro
Livro encontrarLivroMaisCaro(Livro livros[], int quantidade)
{
    Livro maisCaro = livros[0]; // Inicializa com o primeiro livro
    for (int i = 1; i < quantidade; i++)
    {
        if (livros[i].preco > maisCaro.preco)
        {
            maisCaro = livros[i]; // Atualiza o livro mais caro
        }
    }
    return maisCaro; // Retorna o livro mais caro
}

// funcao para calcular o preço médio dos livros
float calcularPrecoMedio(Livro livros[], int quantidade)
{
    float soma = 0;
    for (int i = 0; i < quantidade; i++)
    {
        soma += livros[i].preco; // Soma os preços dos livros
    }
    return soma / quantidade; // Retorna o preço médio
}

// funcao principal
int main()
{

    const int quantidadeLivros = 5; // Define a quantidade de livros
    Livro livros[quantidadeLivros]; // Cria um vetor de livros

    cadastrarLivros(livros, quantidadeLivros); // Cadastra os livros
    exibirLivros(livros, quantidadeLivros);    // Exibe os livros cadastrados

    Livro maisCaro = encontrarLivroMaisCaro(livros, quantidadeLivros); // Encontra o livro mais caro
    printf("\nLivro mais caro:\n");
    printf("Código: %d\n", maisCaro.codigo);
    printf("Título: %s", maisCaro.titulo);
    printf("Preço: R$ %.2f\n", maisCaro.preco);

    float precoMedio = calcularPrecoMedio(livros, quantidadeLivros); // Calcula o preço médio
    printf("\nPreço médio dos livros: R$ %.2f\n", precoMedio);

    return 0; // Finaliza o programa
}
