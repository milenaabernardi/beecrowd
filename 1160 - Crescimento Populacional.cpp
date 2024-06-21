#include <iostream>
using namespace std;

int main (){
    int t, pa, pb, m, p;
    double g1, g2;
    
    cin >> t;
    while (m!=t){
        p = 0;
        cin >> pa >> pb >> g1 >> g2;
        while ((p <=100) && (pa <= pb)){
            pa = pa + (pa* (g1/100));
            pb = pb + (pb* (g2/100));
            p = p+1;
        }
        m = m+1;
        if (p > 100){
            cout << "Mais de 1 seculo." << endl;
        }
        else {
            cout << p << " anos." << endl;
        }
    }
    return 0;
}
