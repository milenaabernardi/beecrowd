#include <iostream>
#include <string>
using namespace std;

int main (){
    int N;
    
    cin >> N;
    cin.ignore();

    while (N--) {
        string A, B;
        cin >> A >> B;

        int lenA = A.length();
        int lenB = B.length();

        if (lenA < lenB) {
            cout << "nao encaixa" << endl;
        } else {
            bool encaixa = true;
            for (int i = 0; i < lenB; i++) {
                if (A[lenA - i - 1] != B[lenB - i - 1]) {
                    encaixa = false;
                    break;
                }
            }

            if (encaixa) {
                cout << "encaixa" << endl;
            } else {
                cout << "nao encaixa" << endl;
            }
        }
    }
    return 0;
}
