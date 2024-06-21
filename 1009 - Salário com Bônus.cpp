#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;
 
int main (){
    string nome;
    double salario, vendas, total;
    
    cin >> nome;
    cin >> salario;
    cin >> vendas;
    
    total=salario+vendas*0.15;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
 
    return 0;
}
