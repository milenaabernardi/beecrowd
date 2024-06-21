#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main (){
    double a, b,c, r1, r2, delta;
    
    cin >> a >> b >> c;
    delta = pow(b,2)-(4*a*c);
    if ((delta < 0)|| (a==0)){
        cout<< "Impossivel calcular" << endl;
    }
    else{
        if (delta==0){
            r1=(-b)/(2*a);
            cout << "R1 = " << fixed << setprecision (5) << r1 << endl << "R2 = " << fixed << setprecision (5) << r1 << endl;
            }
            else {
                r1=(-b +sqrt(delta))/(2*a);
                r2=(-b -sqrt(delta))/(2*a);
                cout << "R1 = " << fixed << setprecision (5) << r1 << endl << "R2 = " << fixed << setprecision (5) << r2 << endl;
            }
    }
    return 0;
