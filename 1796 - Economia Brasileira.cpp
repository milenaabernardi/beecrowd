#include <iostream>
using namespace std;

int main (){
    int quantidade, y = 0, n = 0, x;
    
    cin >> quantidade;
    
    for (int i = 0; i < quantidade; i++) {
        cin >> x;
        if (x == 0) {
            y++;
        }
        if (x == 1) {
            n++;
        }
    }
    
    if (y > n) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
