#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << fixed << setprecision(2) << "Media = " << (n1 + n2 + n3) / 3 << '\n';
    return 0;
}
