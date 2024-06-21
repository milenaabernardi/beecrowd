#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main (){
    double A, B, C, area;
    
    cin >> A >> B >> C;
    area = (A*C)/2;
    cout << "TRIANGULO: " << fixed << setprecision(3) << area << endl;
    area = 3.14159*pow(C,2);
    cout << "CIRCULO: " << fixed << setprecision(3) << area << endl;
    area = ((A+B)*C)/2;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << area << endl;
    area = pow(B,2);
    cout << "QUADRADO: " << fixed << setprecision(3) << area << endl;
    area = A*B;
    cout << "RETANGULO: " << fixed << setprecision(3) << area << endl;
    
    return 0;
}
