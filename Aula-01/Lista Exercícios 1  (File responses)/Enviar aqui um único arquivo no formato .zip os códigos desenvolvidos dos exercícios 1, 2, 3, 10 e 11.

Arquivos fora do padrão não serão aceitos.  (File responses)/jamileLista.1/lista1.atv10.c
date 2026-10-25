#include <iostream>
using namespace std;

int main() {
    int opcao;
    do {
        cout << "\n1 - Verificar triangulo\n2 - Sair\nOpcao: ";
        cin >> opcao;
        if (opcao == 1) {
            double a, b, c;
            cout << "Digite os tres lados: ";
            cin >> a >> b >> c;
            if (a <= 0 || b <= 0 || c <= 0 ||
                a + b <= c || a + c <= b || b + c <= a)
                cout << "Os lados nao formam um triangulo.\n";
            else if (a == b && b == c) cout << "Triangulo Equilatero.\n";
            else if (a == b || a == c || b == c) cout << "Triangulo Isosceles.\n";
            else cout << "Triangulo Escaleno.\n";
        } else if (opcao != 2) {
            cout << "Opcao invalida.\n";
        }
    } while (opcao != 2);
    return 0;
}
