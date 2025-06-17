#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    while (N--) {
        int X, Y;
        cin >> X >> Y;

        int soma = 0;

        if (X > Y) {
            swap(X, Y);
        }

        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                soma += i;
            }
        }

        cout << soma << endl;
    }

    return 0;
}