#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float a, b, c;
    float mod1, mod2, mod3;
    
    cin >> a >> b >> c;
    
    if (b - c < 0)
        mod1 = c - b;
    else
        mod1 = b - c;
        
    if (b - a < 0)
        mod2 = a - b;
    else
        mod2 = b - a;
        
    if (a - c < 0)
        mod3 = c - a;
    else
        mod3 = a - c;
    
    if (mod1 < a && a < (b + c) && mod2 < c && c < (a + b) && mod3 < b && b < (a + c))
        cout << "Perimetro = " << fixed << setprecision(1) << (a + b + c) << endl;
    else
        cout << "Area = " << fixed << setprecision(1) << ((a + b) * c) / 2.0 << endl;
    
    return 0;
}
