#include <iostream>
using namespace std;

int main (){
    int a, b, c, d;
    int diferenca;

    cin >> a >> c >> b >> d;
    diferenca = ((b * 60) + d) - ((a * 60) + c);
    if (diferenca <= 0) diferenca += 24 * 60;
    cout << "O JOGO DUROU " << diferenca / 60 << " HORA(S) E " << diferenca % 60 << " MINUTO(S)" << endl;

    return 0;
}
