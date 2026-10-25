#include <iostream>
using namespace std;

/*
 * O codigo original esta errado porque:
 * 1) temp e um ponteiro nao inicializado; *temp causa acesso invalido.
 * 2) i = *j tenta colocar um inteiro dentro de um ponteiro.
 * 3) i recebe uma copia do endereco local, sem alterar a variavel do chamador.
 *
 * Forma correta:
 */
void troca(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    troca(&a, &b);
    cout << "A = " << a << "\nB = " << b << '\n';
    return 0;
}
