#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int N[100];
    double X;
    
    cin >> X;
    for (int i=0; i<100; i++){
        cout << "N["<<i<<"] = "<< fixed << setprecision(4) << X << endl;
        X /= 2.0;
    }
    return 0;
}
