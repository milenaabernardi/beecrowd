#include <iostream>
#include <string>
using namespace std;

int main (){
    string s;
    int p;

    while (cin >> s >> p) {
        int size = s.size();
        int ciclos = 0;
        int count = 0;

        for (int i = 0; i < size; ++i) {
            if (s[i] == 'R') {
                if (count == 0)
                    ciclos++;
                count++;

                if (count == p)
                    count = 0;
            } else {
                ciclos++;
                count = 0;
            }
        }
        cout << ciclos << "\n";
    }

    return 0;
}
