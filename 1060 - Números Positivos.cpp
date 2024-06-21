#include <iostream>
using namespace std;

int main (){
    float numero;
    int cont=0;

    for (int i=1; i<=6; i++){
        cin >> numero;
        if (numero>0){
            cont++;
        }
    }
    cout << cont << " valores positivos" << endl;
    return 0;
}
