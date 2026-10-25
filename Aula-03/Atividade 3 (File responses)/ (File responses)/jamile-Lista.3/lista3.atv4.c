#include <iostream>
using namespace std;

typedef struct {
    float largura;
    float altura;
} Retangulo;

void dobrarDimensoes(Retangulo *r) {
    r->largura *= 2;
    r->altura *= 2;
}

int main() {
    Retangulo r;
    cin >> r.largura >> r.altura;
    cout << "Antes: largura = " << r.largura << ", altura = " << r.altura << '\n';
    dobrarDimensoes(&r);
    cout << "Depois: largura = " << r.largura << ", altura = " << r.altura << '\n';
    return 0;
}
