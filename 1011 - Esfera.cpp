#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main (){
    double R, pi=3.14159, volume;
    
    cin >> R;
    volume = (4/3.0)*pi*pow(R,3);
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
 
    return 0;
}
