#include <iostream>
using namespace std;

void hm(int mnts, int *h, int *m) {
    *h = mnts / 60;
    *m = mnts % 60;
}

int main() {
    int minutos, horas, resto;
    cin >> minutos;
    if (minutos < 0) {
        cout << "O tempo nao pode ser negativo.\n";
        return 0;
    }
    hm(minutos, &horas, &resto);
    cout << horas << " hora(s) e " << resto << " minuto(s).\n";
    return 0;
}
