#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double I = 0.0, J;

    for (int i = 0; I <= 2.0 + 1e-9; i++, I = i * 0.2) {
        for (int j = 0; j < 3; j++) {
            J = 1 + j + I;

            if (I == int(I)) {
                cout << "I=" << int(I) << " J=" << int(J) << endl;
            } else {
                cout << fixed << setprecision(1);
                cout << "I=" << I << " J=" << J << endl;
            }
        }
    }

    return 0;
}
