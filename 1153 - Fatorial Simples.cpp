#include <iostream>
using namespace std;

int main(){
    int64_t n, m, t, r;
    cin >> n;
    m = n;
    while (n!=1){
        m = m * (n-1);
        n = n - 1;
    }
    cout << m << endl;

    return 0;
}
