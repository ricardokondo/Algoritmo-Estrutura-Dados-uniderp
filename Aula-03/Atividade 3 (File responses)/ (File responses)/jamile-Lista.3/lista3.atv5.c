#include <iostream>
#include <iomanip>
using namespace std;

typedef struct {
    int codigo;
    char nome[50];
    float salario;
} Funcionario;

void reajustarSalario(Funcionario *f, float percentual) {
    f->salario += f->salario * percentual / 100;
}

int main() {
    Funcionario funcionario;
    float percentual;
    cin >> funcionario.codigo;
    cin.ignore();
    cin.getline(funcionario.nome, 50);
    cin >> funcionario.salario >> percentual;
    reajustarSalario(&funcionario, percentual);
    cout << fixed << setprecision(2)
         << "Novo salario: R$ " << funcionario.salario << '\n';
    return 0;
}
