#include <iostream>
#include <iomanip>
using namespace std;
 
int main (){
    float X, Y, consumo;
    
    cin >> X >> Y;
    consumo = X/Y;
    cout << fixed << setprecision(3) << consumo << " km/l" << endl;
    
    return 0;
}
