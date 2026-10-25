#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.14;
    double raio;
    cin >> raio;
    cout << fixed << setprecision(2)
         << "Perimetro = " << 2 * PI * raio << '\n'
         << "Area = " << PI * raio * raio << '\n';
    return 0;
}
