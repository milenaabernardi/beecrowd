#include <iostream>
using namespace std;

int main(){
    int mes;
    cin >> mes;

    string meses[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (mes >= 1 && mes <= 12) {
        cout << meses[mes - 1] << endl;
    }

    return 0;
}
