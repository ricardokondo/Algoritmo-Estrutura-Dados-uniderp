#include <iostream>
using namespace std;

void mm(const int v[], int n, int *minimo, int *maximo) {
    *minimo = *maximo = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] < *minimo) *minimo = v[i];
        if (v[i] > *maximo) *maximo = v[i];
    }
}

int main() {
    const int MAX = 100;
    int v[MAX], n, minimo, maximo;
    cin >> n;
    if (n <= 0 || n > MAX) {
        cout << "Quantidade invalida.\n";
        return 0;
    }
    for (int i = 0; i < n; ++i) cin >> v[i];
    mm(v, n, &minimo, &maximo);
    cout << "Minimo = " << minimo << "\nMaximo = " << maximo << '\n';
    return 0;
}
