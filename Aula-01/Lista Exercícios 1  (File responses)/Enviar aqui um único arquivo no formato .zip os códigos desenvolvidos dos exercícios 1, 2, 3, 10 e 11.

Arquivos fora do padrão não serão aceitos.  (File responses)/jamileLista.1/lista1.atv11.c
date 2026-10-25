#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUMERO_LADOS = 4;
    const double CM_PARA_METRO = 0.01;
    double comprimento, largura;
    cin >> comprimento >> largura;
    if (comprimento <= 0 || largura <= 0) {
        cout << "Os valores devem ser positivos.\n";
        return 0;
    }
    double perimetroCm = 2 * (comprimento + largura);
    cout << fixed << setprecision(2)
         << "Perimetro: " << perimetroCm << " cm\n"
         << "Perimetro: " << perimetroCm * CM_PARA_METRO << " m\n"
         << "Numero de lados: " << NUMERO_LADOS << '\n';
    return 0;
}
