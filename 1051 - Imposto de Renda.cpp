#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario;
    cin >> salario;

    double imposto = 0.0;

    if (salario <= 2000.00) {
        cout << "Isento" << endl;
    } else {
        if (salario > 4500.00) {
            imposto += (salario - 4500.00) * 0.28;
            salario = 4500.00;
        }
        if (salario > 3000.00) {
            imposto += (salario - 3000.00) * 0.18;
            salario = 3000.00;
        }
        if (salario > 2000.00) {
            imposto += (salario - 2000.00) * 0.08;
        }

        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << endl;
    }

    return 0;
}
