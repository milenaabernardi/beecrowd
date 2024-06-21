#include <iostream>
using namespace std;

int main (){
    int n, m=1;
    
    cin >> n;
    while (m!=n+1){
        if (n%m==0){
            cout << m << endl;
        }
        m=m+1;
    }
    return 0;
}
