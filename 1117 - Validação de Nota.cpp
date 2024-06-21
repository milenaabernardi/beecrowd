#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double media, num1, num2;
    
    do {
        cin >> num1;
        if (num1 < 0 || num1 > 10){
            cout << "nota invalida" << endl;
        }
    } while (num1 < 0 || num1 > 10);
    
    do {
        cin >> num2;
        if (num2 < 0 || num2 > 10){
            cout << "nota invalida" << endl;
        }
    } while (num2 < 0 || num2 > 10);
    
    media = (num1 + num2)/2;
    cout << "media = " << fixed << setprecision(2) << media << endl;
    
    return 0;
}
