#include <iostream>
#include <cmath>
using namespace std;

int main (){
    unsigned int numeroA, numeroB;
    unsigned short casos;

    cin >> casos;

    while (casos--) {
        cin >> numeroA >> numeroB;

        long double resultado = numeroB * log10(numeroA);
        cout << static_cast<int>(floor(resultado)) + 1 << endl;
    }

    return 0;
}
