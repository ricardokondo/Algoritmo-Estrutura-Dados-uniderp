#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int maior = max(a, b), menor = min(a, b);
    if (menor == 0) {
        cout << "Nao e possivel dividir por zero.\n";
        return 0;
    }
    cout << maior << " dividido por " << menor
         << " = " << maior / menor << " e resto = " << maior % menor << '\n';
    return 0;
}
