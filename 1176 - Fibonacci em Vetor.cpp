#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
    unsigned long long int numeros, Fib[61], posicao;
    
    cin >> numeros;
    Fib[0] = 0;
    Fib[1] = 1;
    
    for (int i=2; i<61; i++){
        Fib[i] = Fib[i-1] + Fib[i-2];
    }
    for (int j=0; j<numeros; j++){
        cin >> posicao;
        cout << "Fib(" <<posicao<< ") = " <<Fib[posicao] << endl;
    }
    return 0;
}
