#include <iostream>
using namespace std;

int main() {
    long long horas, minutos, segundos;
    cin >> horas >> minutos >> segundos;
    cout << "Total em segundos = " << horas * 3600 + minutos * 60 + segundos << '\n';
    return 0;
}
