#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int nf, ht;
    float vh, salario;
    
    cin >> nf >> ht;
    cout << fixed << setprecision(2);
    cin >> vh;
    cout << "NUMBER = " << nf << endl;
    salario = vh*ht;
    cout << "SALARY = U$ " << salario << fixed << setprecision(2) << endl;

    return 0;
}
