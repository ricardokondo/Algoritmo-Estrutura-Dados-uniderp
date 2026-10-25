#include <iostream>
#include <iomanip>
using namespace std;

typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto produto;
    cout << "Codigo: ";
    cin >> produto.codigo;
    cin.ignore();
    cout << "Nome: ";
    cin.getline(produto.nome, 50);
    cout << "Preco: ";
    cin >> produto.preco;
    cout << "Quantidade: ";
    cin >> produto.quantidade;

    cout << fixed << setprecision(2)
         << "\nCodigo: " << produto.codigo
         << "\nNome: " << produto.nome
         << "\nPreco unitario: R$ " << produto.preco
         << "\nQuantidade: " << produto.quantidade
         << "\nValor total em estoque: R$ "
         << produto.preco * produto.quantidade << '\n';
    if (produto.quantidade == 0) cout << "Produto sem estoque.\n";
    return 0;
}
