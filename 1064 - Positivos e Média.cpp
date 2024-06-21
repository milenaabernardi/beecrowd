#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int n, q;
    float a, t, v;
    n = 0;
    v = 0;
    q = 0;

    while (q != 6){
        cin >> a;
        if (a > 0){
            n = n + 1;
            v = v + a;
        }
        q = q + 1;
    }
    t = v/n;
    cout << n << " valores positivos" << endl;
    cout << fixed << setprecision(1) << t << endl;

    return 0;
}
