#include <iostream>
using namespace std;

void calcular(int a, int b, int *soma, int *multiplicacao) {
    *soma = a + b;
    *multiplicacao = a * b;
}

int main() {
    int a, b, soma, multiplicacao;
    cin >> a >> b;
    calcular(a, b, &soma, &multiplicacao);
    cout << "Soma = " << soma << "\nMultiplicacao = " << multiplicacao << '\n';
    return 0;
}
