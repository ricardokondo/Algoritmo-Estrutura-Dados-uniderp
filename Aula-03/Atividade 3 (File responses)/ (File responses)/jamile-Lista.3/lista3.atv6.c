#include <iostream>
#include <iomanip>
using namespace std;

typedef struct {
    int codigo;
    char titulo[100];
    float preco;
} Livro;

int main() {
    Livro livros[5];
    int maisCaro = 0;
    float soma = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Livro " << i + 1 << " - codigo: ";
        cin >> livros[i].codigo;
        cin.ignore();
        cout << "Titulo: ";
        cin.getline(livros[i].titulo, 100);
        cout << "Preco: ";
        cin >> livros[i].preco;
        soma += livros[i].preco;
        if (livros[i].preco > livros[maisCaro].preco) maisCaro = i;
    }

    cout << fixed << setprecision(2) << "\nLivros cadastrados:\n";
    for (int i = 0; i < 5; ++i)
        cout << livros[i].codigo << " - " << livros[i].titulo
             << " - R$ " << livros[i].preco << '\n';
    cout << "Livro mais caro: " << livros[maisCaro].titulo
         << " - R$ " << livros[maisCaro].preco
         << "\nPreco medio: R$ " << soma / 5 << '\n';
    return 0;
}
