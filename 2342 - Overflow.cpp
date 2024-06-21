#include <iostream>
using namespace std;

int main (){
    int a, b, c;
    char digito;
    
    cin >> a;
    cin >> b >> digito >> c;
    
    if (digito == '+') {
        if (a >= (b + c)) {
            cout << "OK" << endl;
        } else {
            cout << "OVERFLOW" << endl;
        }
    } else {
        if (a >= (b * c)) {
            cout << "OK" << endl;
        } else {
            cout << "OVERFLOW" << endl;
        }
    }
    
    return 0;
}
