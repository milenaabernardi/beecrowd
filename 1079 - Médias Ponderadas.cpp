#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int n;
    float a, b, c;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        float media = (2*a + 3*b + 5*c) / 10.0;
        cout << fixed << showpoint; 
        cout.precision(1); 
        cout << media << endl;
    }
    
    return 0;
}
