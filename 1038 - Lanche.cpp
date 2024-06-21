#include <iostream>
#include <iomanip>
using namespace std;
 
int main (){
    int quantidade, item;
    double valor, valorTotal;
    
    cin >> item;
    cin >> quantidade;
    
    switch (item){
        case (1):
            valor=4.00;
            break;
        case (2):
            valor=4.50;
            break;
        case (3):
            valor=5.00;
            break;
        case (4):
            valor=2.00;
            break;
        case (5):
            valor=1.50;
            break;
        default:
            cout << "nenhuma opcao escolhida!" << endl;
            break;
    }
    valorTotal=quantidade*valor;

    cout << fixed << setprecision(2) << "Total: R$ " << valorTotal << endl;
 
    return 0;
}
