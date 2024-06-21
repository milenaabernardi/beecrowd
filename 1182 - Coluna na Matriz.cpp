#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int l;
    char t;
    double N[12][12];
    double soma = 0.0;
    
    cin >> l;
    cin >> t;
    
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> N[i][j];
            if(j == l) {
                soma += N[i][j];
            }
        }
    }
    
    if(t == 'S')
        cout << fixed << setprecision(1) << soma << endl;
    else if(t == 'M')
        cout << fixed << setprecision(1) << soma / 12.0 << endl;
    
    return 0;
}
