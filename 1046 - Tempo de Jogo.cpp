#include <iostream>
using namespace std;

int main (){
    int minimo, maximo;

    cin >> minimo;
    cin >> maximo;
   
    if (minimo >= maximo)
        cout << "O JOGO DUROU " << (24 - minimo) + maximo << " HORA(S)" << endl;
    else
        cout << "O JOGO DUROU " << maximo - minimo << " HORA(S)" << endl;

    return 0;
}
