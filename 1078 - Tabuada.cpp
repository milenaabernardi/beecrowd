#include <iostream>
using namespace std;
 
int main (){
    int n;
    
    cin >> n;
    for (int aux = 1; aux <= 10; aux++) {
        cout << aux << " x " << n << " = " << (n * aux) << endl;
    }
 
    return 0;
}
